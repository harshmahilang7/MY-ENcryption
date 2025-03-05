import React, { useState } from "react";
import MainHeader from "./Component/MainHeader";
import MainChat from "./Component/MainChat";
import Sidepannel from "./Component/Sidepannel";

function App() {
  const [chats, setChats] = useState([]); // List of chat names
  const [activeChat, setActiveChat] = useState(null); // Active chat name
  const [chatHistory, setChatHistory] = useState({}); // Store chat history for each chat

  // Function to handle the addition of a new chat
  const addNewChat = () => {
    const newChat = `Chat ${chats.length + 1}`; // Create a new chat name
    setChats([...chats, newChat]); // Add new chat to chats list
    setActiveChat(newChat); // Set the new chat as active
    setChatHistory((prevHistory) => ({
      ...prevHistory,
      [newChat]: [], // Initialize chat history for the new chat
    }));
  };

  // Function to remove a chat
  const removeChat = (chatName) => {
    setChats(chats.filter((chat) => chat !== chatName)); // Remove chat from chats list
    const updatedHistory = { ...chatHistory };
    delete updatedHistory[chatName]; // Remove chat history for the removed chat
    setChatHistory(updatedHistory);
    if (activeChat === chatName) setActiveChat(null); // Clear active chat if removed
  };

  // Function to export chat history as a JSON file
  const exportChatHistory = () => {
    const dataStr = JSON.stringify(chatHistory[activeChat]);
    const dataUri = `data:text/json;charset=utf-8,${encodeURIComponent(
      dataStr
    )}`;
    const exportFileDefaultName = `${activeChat}_chat_history.json`;

    const link = document.createElement("a");
    link.setAttribute("href", dataUri);
    link.setAttribute("download", exportFileDefaultName);
    link.click();
  };

  // Function to update chat history
  const updateChatHistory = (chatName, message) => {
    setChatHistory((prevHistory) => ({
      ...prevHistory,
      [chatName]: [...(prevHistory[chatName] || []), message],
    }));
  };

  return (
    <div className="h-screen bg-white text-gray-900 flex flex-col">
      <MainHeader />

      <div className="flex h-full overflow-hidden">
        <div className="w-1/5 bg-white p-6 border-r border-gray-300 rounded-lg shadow-sm hover:shadow-md transition-all duration-300">
          <Sidepannel
            chats={chats}
            setActiveChat={setActiveChat}
            addNewChat={addNewChat}
            removeChat={removeChat}
            exportChatHistory={exportChatHistory}
          />
        </div>

        <div className="flex-grow p-6">
          {activeChat && (
            <MainChat
              activeChat={activeChat}
              chatHistory={chatHistory[activeChat] || []}
              updateChatHistory={updateChatHistory}
            />
          )}
        </div>
      </div>
    </div>
  );
}

export default App;
