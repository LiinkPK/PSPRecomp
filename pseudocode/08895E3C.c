/* Entry 0x08895E3C | file offset 0x00092E14 | FUN_08895e3c | bytes 220 */

void FUN_08895e3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_110 [256];
  
  FUN_0893476c(auStack_110,"%s.mes",param_2);
  iVar1 = FUN_08869ab4(param_3,auStack_110);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    *param_1 = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = FUN_08869ab4(param_3,"snd_sebattle_ex.at3");
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    param_1[1] = *(undefined4 *)(iVar1 + 4);
    param_1[2] = *(undefined4 *)(iVar1 + 8);
  }
  iVar1 = FUN_08869ab4(param_3,"snd_sebattle_finish.at3");
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    param_1[3] = *(undefined4 *)(iVar1 + 4);
    param_1[4] = *(undefined4 *)(iVar1 + 8);
  }
  return;
}

