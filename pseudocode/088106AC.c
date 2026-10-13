/* Entry 0x088106AC | file offset 0x0000D684 | FUN_088106ac | bytes 368 */

undefined4 FUN_088106ac(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined1 auStack_20 [16];
  
  FUN_08810964(auStack_20);
  iVar2 = FUN_08810a20(auStack_20,param_2,param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_08810a88(auStack_20,4);
    puVar1 = PTR_DAT_089d4780;
    if (iVar2 == 0) {
      FUN_0881099c(auStack_20,2);
      uVar3 = 0xfffffffe;
    }
    else {
      uVar3 = FUN_089359e8(PTR_DAT_089d4780);
      iVar2 = FUN_08935b50(iVar2,puVar1,uVar3);
      if (iVar2 == 0) {
        pfVar4 = (float *)FUN_08810a88(auStack_20,4);
        if (pfVar4 == (float *)0x0) {
          FUN_0881099c(auStack_20,2);
          uVar3 = 0xfffffffc;
        }
        else if (*pfVar4 == 1.02) {
          iVar2 = FUN_0881081c(param_1,auStack_20);
          if (iVar2 == 0) {
            *param_1 = 1;
            FUN_0881099c(auStack_20,2);
            uVar3 = 0;
          }
          else {
            FUN_0881099c(auStack_20,2);
            uVar3 = 0xfffffffa;
          }
        }
        else {
          FUN_0881099c(auStack_20,2);
          uVar3 = 0xfffffffb;
        }
      }
      else {
        FUN_0881099c(auStack_20,2);
        uVar3 = 0xfffffffd;
      }
    }
  }
  else {
    FUN_0881099c(auStack_20,2);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

