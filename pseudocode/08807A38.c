/* Entry 0x08807A38 | file offset 0x00004A10 | FUN_08807a38 | bytes 128 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6c54,089c6cf4,089c6d2c. Boundary still requires runtime validation. */

void FUN_08807a38(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_09af84cc;
  uVar3 = DAT_09af84c8;
  uVar2 = DAT_09af84c4;
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    *param_1 = DAT_09af84c0;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x84);
    uVar4 = *(undefined4 *)(iVar1 + 0x88);
    uVar3 = *(undefined4 *)(iVar1 + 0x8c);
    *param_1 = *(undefined4 *)(iVar1 + 0x80);
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
  }
  return;
}

