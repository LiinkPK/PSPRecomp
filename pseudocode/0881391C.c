/* Entry 0x0881391C | file offset 0x000108F4 | FUN_0881391c | bytes 668 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0881391c(undefined4 param_1)

{
  int iVar1;
  
  FUN_0885c93c();
  FUN_08813be4(param_1,&DAT_089c6f14,0,0);
  FUN_08813be4(param_1,&DAT_089c6f1c,0,1);
  FUN_08813be4(param_1,&DAT_089c6f24,0,2);
  FUN_08813be4(param_1,&DAT_089c6f24,1,3);
  FUN_08813be4(param_1,&DAT_089c6f2c,0,4);
  iVar1 = FUN_0885ca98(param_1,1,0x69617262,0);
  if (iVar1 != 0) {
    func_0x08a801b4(_DAT_08a80218,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x72617073,0);
  if (iVar1 != 0) {
    FUN_0885af78(DAT_089d4dc8 + 0x7b0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x675f6f6a,0);
  if (iVar1 != 0) {
    func_0x08ac61ac(_DAT_08ac8ef8,1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x61727561,0);
  if (iVar1 != 0) {
    func_0x08ac61ac(_DAT_08ac8ef8,0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x6e756874,0);
  if (iVar1 != 0) {
    func_0x08ac61ac(_DAT_08ac8ef8,2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  return;
}

