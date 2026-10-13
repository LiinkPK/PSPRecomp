/* Entry 0x08813C78 | file offset 0x00010C50 | FUN_08813c78 | bytes 1744 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08813c78(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0885c93c();
  FUN_08813be4(param_1,&DAT_089c6f14,0,0);
  FUN_08813be4(param_1,&DAT_089c6f1c,0,1);
  FUN_08813be4(param_1,&DAT_089c6f24,0,2);
  FUN_08813be4(param_1,&DAT_089c6f24,1,3);
  FUN_08813be4(param_1,&DAT_089c6f2c,0,4);
  iVar1 = FUN_0885ca98(param_1,3,0x626d756e,0);
  if (iVar1 != 0) {
    FUN_088586ac(DAT_089d4dc8 + 400,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,1,0x7570616d,0);
  if (iVar1 != 0) {
    func_0x08b532b4(_DAT_08b54330,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca3c(param_1,0x14,0);
  if (iVar1 != 0) {
    func_0x08ac6124(_DAT_08ac8ef8,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x72617073,0);
  if (iVar1 != 0) {
    FUN_0885af78(DAT_089d4dc8 + 0x7b0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x61727561,0);
  if (iVar1 != 0) {
    func_0x08ac61ac(_DAT_08ac8ef8,0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x675f6f6a,0);
  if (iVar1 != 0) {
    func_0x08ac61ac(_DAT_08ac8ef8,1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x6e756874,0);
  if (iVar1 != 0) {
    func_0x08ac61ac(_DAT_08ac8ef8,2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,0x12,0x726f5f63,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
  }
  iVar1 = FUN_0885ca98(param_1,2,0x726f5f63,0);
  if (iVar1 != 0) {
    FUN_088442a0(DAT_089d4960,0x7f,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar3,
                 uVar4,0,0);
  }
  iVar1 = FUN_0885ca98(param_1,2,0x726f5f63,1);
  if (iVar1 != 0) {
    FUN_088442a0(DAT_089d4960,0x80,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar3,
                 uVar4,0,0);
  }
  iVar1 = FUN_0885ca98(param_1,2,0x726f5f63,2);
  if (iVar1 != 0) {
    FUN_088442a0(DAT_089d4960,0x81,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar3,
                 uVar4,0,0);
  }
  iVar1 = FUN_0885ca98(param_1,1,0x69617262,0);
  if (iVar1 != 0) {
    func_0x08a801b4(_DAT_08a80218,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,1,0x73797263,0);
  if (iVar1 != 0) {
    func_0x08abb00c(_DAT_08abbdf8,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,3,0x73797263,0);
  if (iVar1 != 0) {
    func_0x08abb084(_DAT_08abbdf8,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  iVar1 = FUN_0885ca98(param_1,2,0x6c655f64,0);
  iVar2 = FUN_0885ca98(param_1,0x12,0x6c655f64,0);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_088442a0(DAT_089d4960,0xc1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                 *(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),0,0);
  }
  return;
}

