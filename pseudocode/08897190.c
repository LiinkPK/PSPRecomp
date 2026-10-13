/* Entry 0x08897190 | file offset 0x00094168 | FUN_08897190 | bytes 172 */

void FUN_08897190(int param_1)

{
  int iVar1;
  
  if ((((param_1 != 0) && (*DAT_089d6c10 == 0)) &&
      (iVar1 = FUN_08869ab4(param_1,PTR_s_mapentry_bin_089d6c14), iVar1 != 0)) &&
     (*(uint *)(iVar1 + 8) < 0x3cc5)) {
    FUN_08935524(&DAT_09b49220,*(undefined4 *)(iVar1 + 4),*(uint *)(iVar1 + 8));
    FUN_08897124(DAT_089d6c10,&DAT_09b49220);
  }
  return;
}

