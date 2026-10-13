/* Entry 0x08932FB8 | file offset 0x0012FF90 | FUN_08932fb8 | bytes 124 */

void FUN_08932fb8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_08933034(param_1);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(iVar2 + 0x34) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 1);
  FUN_088d3cf0(0,param_1 + 0x34,&DAT_089cf340);
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 0xe) = 4;
  return;
}

