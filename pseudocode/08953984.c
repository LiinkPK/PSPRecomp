/* Entry 0x08953984 | file offset 0x0015095C | FUN_08953984 | bytes 104 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db81c. Boundary still requires runtime validation. */

undefined4 FUN_08953984(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  
  param_4[8] = 0;
  uVar1 = *(ushort *)(param_3 + 0x40);
  param_4[9] = (uint)uVar1;
  iVar2 = (uint)uVar1 + (uint)*(ushort *)(param_3 + 0x44);
  param_4[10] = iVar2;
  iVar2 = iVar2 + (uint)*(ushort *)(param_3 + 0x42);
  param_4[0xb] = iVar2;
  uVar1 = *(ushort *)(param_3 + 0x44);
  param_4[0xd] = 0;
  param_4[0xc] = iVar2 + (uint)uVar1;
  param_4[4] = 0;
  param_4[3] = 0x3f800000;
  param_4[2] = 0x3f800000;
  param_4[1] = 0x3f800000;
  *param_4 = 0x3f800000;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  return 1;
}

