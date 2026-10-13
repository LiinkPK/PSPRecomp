/* Entry 0x088D5318 | file offset 0x000D22F0 | FUN_088d5318 | bytes 164 */

void FUN_088d5318(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_110 [256];
  
  *param_1 = param_2;
  iVar1 = FUN_0889f3e4(DAT_089d6c30);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    FUN_0893476c(auStack_110,"bgm/%s",iVar1 + 0x1c);
    iVar1 = FUN_08862c40(auStack_110,1);
    param_1[3] = iVar1;
    if ((param_3 < iVar1) || (param_1[2] == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      FUN_08862854(auStack_110,param_1[2],iVar1,1);
    }
  }
  return;
}

