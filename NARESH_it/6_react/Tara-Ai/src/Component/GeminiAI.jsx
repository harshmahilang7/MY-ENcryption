import { useState } from "react";

export default function GeminiAI() {
  const [response, setResponse] = useState("");
  const [userInput, setUserInput] = useState(""); // State for user input

  const fetchAIResponse = async () => {
    const API_KEY = "AIzaSyBgTeiByMiLTV9VeQlHK3kA0BlTAJD28dM"; // Replace with your actual API Key

    if (!API_KEY) {
      console.error("API Key is missing!");
      setResponse("API Key is missing.");
      return;
    }

    const url = `https://generativelanguage.googleapis.com/v1beta/models/gemini-2.0-flash:generateContent?key=${API_KEY}`;

    // Modify requestBody to use the userInput
    const requestBody = {
      contents: [
        {
          parts: [{ text: userInput }],
        },
      ],
    };

    try {
      const res = await fetch(url, {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify(requestBody),
      });

      const data = await res.json();

      if (data.error) {
        console.error("API Error:", data.error);
        setResponse(`Error: ${data.error.message}`);
        return;
      }

      if (data && data.candidates) {
        // Display bot response with bot's name
        setResponse(`Tara: ${data.candidates[0].content.parts[0].text}`);
      } else {
        setResponse("Unexpected response format.");
      }
    } catch (error) {
      console.error("Fetch Error:", error);
      setResponse("Failed to fetch response.");
    }
  };

  return (
    <div className="mt-4 p-4 bg-gray-100 dark:bg-gray-800 rounded-lg shadow-lg">
      <h2 className="text-2xl font-semibold text-gray-900 dark:text-white">
        Ask Tara AI
      </h2>
      <input
        type="text"
        value={userInput}
        onChange={(e) => setUserInput(e.target.value)} // Update user input
        placeholder="Type your question..."
        className="mt-4 mb-4 p-3 border border-gray-300 rounded-lg w-full sm:w-96 text-lg dark:bg-gray-800 dark:text-white dark:border-gray-600 focus:outline-none focus:ring-2 focus:ring-sky-500"
      />
      <button
        onClick={fetchAIResponse}
        className="bg-sky-500 hover:bg-sky-600 text-white py-2 px-6 rounded-full transition duration-200"
      >
        Ask Tara
      </button>
      {response && (
        <div className="mt-4 p-4 bg-white dark:bg-gray-900 rounded-lg shadow-md">
          <p className="text-lg text-gray-900 dark:text-white">{response}</p>
        </div>
      )}
    </div>
  );
}
