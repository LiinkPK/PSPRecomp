/* Entry 0x08847158 | file offset 0x00044130 | FUN_08847158 | bytes 204 */

void FUN_08847158(int param_1)

{
  int iVar1;
  
  if (*DAT_089d4968 == 0) {
    if (param_1 == 0) {
      FUN_08862854(PTR_s_objentry_bin_089d496c,&DAT_09afee58,0x13d30,1);
    }
    else {
      iVar1 = FUN_08869ab4(param_1,PTR_s_objentry_bin_089d496c);
      if (iVar1 == 0) {
        return;
      }
      FUN_08935524(&DAT_09afee58,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    }
    FUN_08846c24(DAT_089d4968,&DAT_09afee58);
  }
  return;
}

