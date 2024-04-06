import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class MenuExample {
 public static void main(String[] args) {
 JFrame frame = new JFrame("Menu Example");
 frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 frame.setSize(400, 300);
 JMenuBar menuBar = new JMenuBar();
 JMenu fileMenu = new JMenu("File");
 JMenuItem newItem = new JMenuItem("New");
 JMenuItem openItem = new JMenuItem("Open");
 JMenuItem saveItem = new JMenuItem("Save");
 JMenuItem exitItem = new JMenuItem("Exit");
 fileMenu.add(newItem);
 fileMenu.add(openItem);
 fileMenu.add(saveItem);
 fileMenu.addSeparator();
 fileMenu.add(exitItem);
 JMenu editMenu = new JMenu("Edit");
 JMenuItem cutItem = new JMenuItem("Cut");
 JMenuItem copyItem = new JMenuItem("Copy");
 JMenuItem pasteItem = new JMenuItem("Paste");
 editMenu.add(cutItem);
 editMenu.add(copyItem);
 editMenu.add(pasteItem);
 menuBar.add(fileMenu);
 menuBar.add(editMenu);
 frame.setJMenuBar(menuBar);
 // Add action listener to exitItem
 exitItem.addActionListener(new ActionListener() {
 @Override
 public void actionPerformed(ActionEvent e) {
 System.exit(0);
 }
 });
 frame.setVisible(true);
 }
}
