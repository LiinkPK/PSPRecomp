/* Entry 0x0892E044 | file offset 0x0012B01C | FUN_0892e044 | bytes 132 */

void FUN_0892e044(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0892e0c8();
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(iVar2 + 0x30) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 2);
  FUN_088d3cf0(0,param_1 + 0x30,&DAT_089cef30);
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 0xe) = 2;
  *(undefined2 *)(*(int *)(param_1 + 0x30) + 0xe) = 7;
  return;
}

