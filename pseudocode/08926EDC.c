/* Entry 0x08926EDC | file offset 0x00123EB4 | FUN_08926edc | bytes 32 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089ceaf8,089ceb0c,089ceb18,089ceb20. Boundary still requires runtime validation. */

void FUN_08926edc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x20) + *(int *)(param_3 + 0x10) * 2 + 0xc);
  *(undefined4 *)(param_3 + 0xc) = param_4;
  *(int *)(param_3 + 0x10) = (int)sVar1;
  switchD_08926ec0::default();
  return;
}

