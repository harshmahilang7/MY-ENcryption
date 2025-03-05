import React from "react";

function Sidepannel({
  chats,
  setActiveChat,
  addNewChat,
  removeChat,
  exportChatHistory,
}) {
  return (
    <div className="bg-gray-100 p-6 w-full min-w-[250px] h-full shadow-sm rounded-lg flex flex-col text-gray-800 transition-all duration-300 hover:scale-102 hover:shadow-md border-2 border-solid ">
      <div className="mb-6 text-center">
        <button
          onClick={addNewChat}
          className="bg-gray-800 text-white py-3 px-6 rounded-lg shadow-lg hover:scale-105 transition duration-300"
        >
          New Chat
        </button>
      </div>

      {/* Display the list of chats */}
      <div className="space-y-4 overflow-y-hidden">
        {chats.map((chat, index) => (
          <div key={index} className="flex justify-between items-center">
            <div
              onClick={() => setActiveChat(chat)}
              className="p-4 rounded-lg bg-gray-800 text-white hover:scale-105 transition duration-300 hover:shadow-md"
            >
              {chat}
            </div>

            <button
              onClick={() => removeChat(chat)}
              className="text-red-500 hover:text-red-700 p-2 rounded-full"
            >
              ❌
            </button>
          </div>
        ))}
      </div>

      {/* Export Chat Button */}
      {chats.length > 0 && (
        <div className="mt-auto">
          <button
            onClick={exportChatHistory}
            className="bg-gray-800 text-white py-3 px-6 rounded-lg shadow-lg hover:scale-105 transition duration-300 w-full mt-4"
          >
            Export Chat History
          </button>
        </div>
      )}
    </div>
  );
}

export default Sidepannel;
