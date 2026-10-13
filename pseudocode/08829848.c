/* Entry 0x08829848 | file offset 0x00026820 | FUN_08829848 | bytes 156 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08829848(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 99) & 0x80) != 0) {
    func_0x08a620b0(_DAT_08a62280,0);
  }
  FUN_0882fbfc(param_1);
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar1 + 0x44c) = 0;
  *(undefined4 *)(iVar1 + 0x448) = 0;
  *(undefined4 *)(iVar1 + 0x454) = 0;
  *(undefined4 *)(iVar1 + 0x450) = 0;
  iVar1 = FUN_0883739c(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    func_0x08b33cd0(uVar2);
    func_0x08b30904(uVar2);
  }
  return;
}

