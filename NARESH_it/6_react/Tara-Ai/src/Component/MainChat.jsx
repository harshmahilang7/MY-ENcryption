import React, { useState } from "react";

function MainChat({ activeChat, chatHistory, updateChatHistory }) {
  const [userInput, setUserInput] = useState("");
  const [isLoading, setIsLoading] = useState(false); // Loading state for AI response

  const fetchAIResponse = async (userMessage) => {
    const API_KEY = "AIzaSyBgTeiByMiLTV9VeQlHK3kA0BlTAJD28dM"; // Replace with your actual API key
    const url = `https://generativelanguage.googleapis.com/v1beta/models/gemini-2.0-flash:generateContent?key=${API_KEY}`;
    const requestBody = {
      contents: [{ parts: [{ text: userMessage }] }],
    };

    try {
      setIsLoading(true); // Start loading
      const res = await fetch(url, {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify(requestBody),
      });

      const data = await res.json();
      if (data.error) {
        console.error("API Error:", data.error);
        return "Error: " + data.error.message;
      } else {
        return data.candidates[0].content.parts[0].text;
      }
    } catch (error) {
      console.error("Fetch Error:", error);
      return "Failed to fetch response.";
    }
  };

  const handleSendMessage = async () => {
    if (userInput.trim()) {
      const userMessage = { sender: "user", text: userInput };
      updateChatHistory(activeChat, userMessage); // Immediately update chat with user message

      setUserInput(""); // Clear input field after sending

      // Get AI response and update chat history with AI reply
      const aiResponse = await fetchAIResponse(userInput);
      const aiMessage = { sender: "ai", text: aiResponse };
      updateChatHistory(activeChat, aiMessage); // Immediately update chat with AI response
      setIsLoading(false); // Hide loading spinner after response
    }
  };

  return (
    <div className="flex flex-col items-center p-6 w-full max-w-4xl mx-auto">
      <h2 className="text-3xl font-bold text-gray-900 mb-6">{activeChat}</h2>

      <div className="flex flex-col w-full space-y-4 mb-6 overflow-y-auto max-h-[60vh]">
        {/* Ensure chatHistory[activeChat] is not undefined, map only if valid */}
        {Array.isArray(chatHistory) &&
          chatHistory.map((message, index) => (
            <div
              key={index}
              className={`flex items-start ${
                message.sender === "user" ? "justify-end" : "justify-start"
              }`}
            >
              <div
                className={`max-w-xs p-4 rounded-lg text-white ${
                  message.sender === "user"
                    ? "bg-gradient-to-r from-sky-400 to-indigo-500"
                    : "bg-gray-800 text-gray-800"
                } shadow-sm hover:shadow-md transition-all duration-300`}
              >
                <p className="text-lg">{message.text}</p>
              </div>
            </div>
          ))}

        {/* Show loading spinner when fetching AI response */}
        {isLoading && (
          <div className="flex justify-center items-center p-4">
            <div className="animate-spin border-t-4 border-white w-8 h-8 rounded-full border-solid"></div>
          </div>
        )}
      </div>

      <div className="flex w-full items-center justify-between mt-4 space-x-2">
        <input
          type="text"
          value={userInput}
          onChange={(e) => setUserInput(e.target.value)}
          placeholder="Ask Tara something..."
          className="p-3 border border-gray-300 rounded-lg w-full text-lg focus:outline-none focus:ring-2 focus:ring-sky-500 transition-all duration-300"
        />

        <button
          onClick={handleSendMessage}
          className="bg-gradient-to-r from-sky-500 to-indigo-500 text-white py-2 px-6 rounded-full transition duration-300 transform hover:scale-105 hover:bg-gradient-to-r hover:from-sky-600 hover:to-indigo-600"
        >
          Send
        </button>
      </div>
    </div>
  );
}

export default MainChat;
