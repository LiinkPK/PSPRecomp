/* Entry 0x088C212C | file offset 0x000BF104 | FUN_088c212c | bytes 84 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d745c. Boundary still requires runtime validation. */

undefined4 FUN_088c212c(int *param_1,int param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar1 = *param_4;
  sVar2 = param_4[1];
  iVar3 = *param_1 * 0x343fd + 0x269ec3;
  *param_1 = iVar3;
  *(int *)(param_2 + 4) =
       (int)(iVar3 >> 0x10 & 0x7fffU) % (((int)sVar2 - (int)sVar1) + 1) + (int)sVar1;
  return 1;
}

