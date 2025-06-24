# DATA-COMPRESSION-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SATYAM KUMAR

*INTERN ID*: CT04DF285

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS 

*TASK NUMBER*: 4

*helping sources*: YOUTUBE , CHATGTP , GOOGLE 

## THIS IS ABOUT DATA COMPRESSION TOOL. WE HAVE TO WRITE  A PROGRAM TO IMPLEMENT A BASIC DATA COMPRESSION ALGORITHM LIKE RUN-LENGTH ENCODING (RLE).

## DELIVERABLE: A TOOL THAT COMPRESSES AND DECOMPRESSES TEXT FILES.

*IHAVE PREPARE THIS TASK IN DEV C++
* ✅ How to Compile & Run in Dev-C++:
*Open Dev-C++.*

*File > New > Source File.*

*TYPE THE CODE* 

*Save as rle_tool_dev.cpp.*

*Compile (F9). Run (Ctrl + F10).*

*Provide the input/output file names without quotes.

*🔎 Input File (input.txt)

*AAABBBCCCCDD*

*WE GET (Compressed Output:)
*3A3B4C2D*


▶️ 2. Run the Program in Dev-C++
When you run the program, it will ask:

css
Copy
Edit
RLE Compression Tool
1. Compress a file
2. Decompress a file
Enter your choice:
👉 If you want to compress:
Type 1 and press Enter.

Then it asks:

pgsql
Copy
Edit
Enter input file name:
➡️ Type: input.txt and press Enter

java
Copy
Edit
Enter output (compressed) file name:
➡️ Type: compressed.txt and press Enter

Now it compresses the file, and a new file compressed.txt will be created in the same folder.

🟢 If you want to decompress:
Run the program again.

Choose option 2.

For input file, type compressed.txt.

For output file, type something like decompressed.txt.

📁 Example File Names:
Purpose	Example File Name
Input Text	input.txt
Compressed File	compressed.txt
Decompressed	decompressed.txt

Let me know if you'd like this program to browse files using a file dialog, or automatically add .txt extensions!



You said:
what we get output

ChatGPT said:
Great! Let me show you exactly what output you’ll get when you run this program in both compression and decompression modes.

✅ 1. Compression Mode (User chooses option 1)
📄 Example Input File: input.txt
Contents of input.txt:

nginx
Copy
Edit
AAABBBCCCCDD
🖥️ Program Interaction:
less
Copy
Edit
RLE Compression Tool
1. Compress a file
2. Decompress a file
Enter your choice: 1
Enter input file name: input.txt
Enter output (compressed) file name: compressed.txt
Compression done. Output file: compressed.txt
📄 Output File: compressed.txt
Contents:

Copy
Edit
3A3B4C2D
✅ 2. Decompression Mode (User chooses option 2)
📄 Input File: compressed.txt
Contents:

Copy
Edit
3A3B4C2D
🖥️ Program Interaction:
yaml
Copy
Edit
RLE Compression Tool
1. Compress a file
2. Decompress a file
Enter your choice: 2
Enter input (compressed) file name: compressed.txt
Enter output (decompressed) file name: decompressed.txt
Decompression done. Output file: decompressed.txt
📄 Output File: decompressed.txt
Contents:

nginx
Copy
Edit
AAABBBCCCCDD


