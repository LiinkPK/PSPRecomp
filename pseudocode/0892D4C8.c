/* Entry 0x0892D4C8 | file offset 0x0012A4A0 | FUN_0892d4c8 | bytes 120 */

void FUN_0892d4c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0892d540();
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(iVar2 + 0x30) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 5);
  FUN_088d3cf0(0,param_1 + 0x30,&DAT_089cedf0);
  *(undefined2 *)(*(int *)(param_1 + 0x30) + 0xe) = 4;
  return;
}

