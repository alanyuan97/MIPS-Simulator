typedef signed int Word;
typedef unsigned int UWord;


class Memory{

//NOTE: remember interface for this class is in unit of byte (8bit), but it is stored as word (4BYTE!)

public:
	Word getInstruction(Word PC);

	//Binary could read from instruction memory https://github.com/m8pple/arch2-2018-cw/issues/9
	Word readWord(Word addr);
	void writeWord(Word addr,Word wd);
	Word readByte(Word addr);
	void writeByte(Word addr, Word wd);
	void writeHalfword(Word addr, Word wd);



  Memory(char* instructionFile);

private:
	Word memInstruction[0x400000]={0}; //0x1000000>>2 SEE note
  // Word const  memInstruction[0x10000]={0}; //0x1000000>>2 SEE note
	Word memRW[0x1000000]={0};	//0x4000000>>2 SEE note

	void Memexception(Word addr);

  void _printInst(Word inst);

	//invoke with special address for external R/W
  //NEED try for exception?
	//NEED TO flush after putc?
	inline Word GETC();
	inline void PUTC(Word wd);


};
