/* Entry 0x0892E9B4 | file offset 0x0012B98C | FUN_0892e9b4 | bytes 136 */

void FUN_0892e9b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0892ea3c(param_1);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_088daa68(param_2);
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 1);
  FUN_088d3cf0(0,param_1 + 0xc,&DAT_089ceff0);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xe) = 1;
  return;
}

