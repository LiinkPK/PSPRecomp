/* Entry 0x0893DA24 | file offset 0x0013A9FC | FUN_0893da24 | bytes 428 */

undefined4 FUN_0893da24(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_0893ddfc();
  uVar4 = *(uint *)(PTR_DAT_089d8980 + 4) & 0xfffffffc;
  iVar3 = ((uVar4 - param_2) + 0xfef) / 0x1000 - 1;
  if (iVar3 * 0x1000 < 0x1000) {
    FUN_0893de38(param_1);
    return 0;
  }
  puVar1 = (undefined *)FUN_0893f058(param_1,0);
  if (puVar1 != PTR_DAT_089d8980 + uVar4) {
    FUN_0893de38(param_1,iVar3 * -0x1000);
    return 0;
  }
  iVar2 = FUN_0893f058(param_1);
  if (iVar2 != -1) {
    *(uint *)(PTR_DAT_089d8980 + 4) = uVar4 + iVar3 * -0x1000 | 1;
    DAT_089d8d94 = DAT_089d8d94 + iVar3 * -0x1000;
    FUN_0893de38(param_1);
    return 1;
  }
  iVar3 = FUN_0893f058(param_1,0);
  if (0xf < iVar3 - (int)PTR_DAT_089d8980) {
    DAT_089d8d94 = iVar3 - DAT_089d8d88;
    *(uint *)(PTR_DAT_089d8980 + 4) = iVar3 - (int)PTR_DAT_089d8980 | 1;
  }
  FUN_0893de38(param_1);
  return 0;
}

