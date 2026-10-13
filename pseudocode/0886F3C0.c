/* Entry 0x0886F3C0 | file offset 0x0006C398 | FUN_0886f3c0 | bytes 100 */

undefined4 FUN_0886f3c0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [64];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_08935828(auStack_50,0,0x40);
    FUN_0893476c(auStack_50,"ms0:/PSP/SAVEDATA/%s%s",DAT_089d6010,param_2);
    uVar1 = FUN_089a5674(auStack_50);
  }
  return uVar1;
}

