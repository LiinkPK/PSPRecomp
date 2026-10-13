/* Entry 0x0886F23C | file offset 0x0006C214 | FUN_0886f23c | bytes 252 */

void FUN_0886f23c(undefined4 param_1)

{
  int iVar1;
  
  FUN_0886fa1c();
  if (DAT_089d5f1f == '\0' && DAT_089d5f20 == '\0') {
    DAT_089d5fb8 = FUN_0886eebc(DAT_089d5f98,"libsuppreacc.prx",0);
    DAT_089d5fc4 = FUN_08862c40(PTR_s_save_JP_PARAM_SFO_089d5fa8,1);
    DAT_089d5fc0 = FUN_08882118(DAT_089d5fc4,0x40);
    FUN_08862854(PTR_s_save_JP_PARAM_SFO_089d5fa8,DAT_089d5fc0,DAT_089d5fc4,1);
    iVar1 = scesupPreAcc_NID_86DEBD66(DAT_089d6010,0);
    if ((iVar1 == 0) && (iVar1 = scesupPreAcc_NID_13AE25B3(PTR_DAT_089d5fa0), iVar1 == 0)) {
      FUN_0886f424(param_1,0);
    }
  }
  return;
}

