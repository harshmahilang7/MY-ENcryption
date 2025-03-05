import { useState } from "react";

export default function GeminiAI() {
  const [response, setResponse] = useState("");
  const [userInput, setUserInput] = useState(""); // State for user input

  const fetchAIResponse = async () => {
    const API_KEY = "AIzaSyBgTeiByMiLTV9VeQlHK3kA0BlTAJD28dM";

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
      // console.log("Raw API Response:", data);
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
    <div>
      <h1>TARA AI Response</h1>
      <input
        type="text"
        value={userInput}
        onChange={(e) => setUserInput(e.target.value)} // Update user input
        placeholder="Ask Tara anything..."
      />
      <button onClick={fetchAIResponse}>Ask Tara</button>
      <p>{response}</p>
    </div>
  );
}
