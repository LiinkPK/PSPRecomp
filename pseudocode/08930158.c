/* Entry 0x08930158 | file offset 0x0012D130 | FUN_08930158 | bytes 120 */

void FUN_08930158(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089301d0();
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(iVar2 + 0x30) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 1);
  FUN_088d3cf0(0,param_1 + 0x30,&DAT_089cf138);
  *(undefined2 *)(*(int *)(param_1 + 0x30) + 0xe) = 1;
  return;
}

