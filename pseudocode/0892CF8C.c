/* Entry 0x0892CF8C | file offset 0x00129F64 | FUN_0892cf8c | bytes 108 */

void FUN_0892cf8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0892cff8();
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(iVar2 + 0x30) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 1);
  FUN_088d3cf0(0,param_1 + 0x30,&DAT_089ced98);
  return;
}

