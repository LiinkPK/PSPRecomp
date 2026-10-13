/* Entry 0x088AB5A4 | file offset 0x000A857C | FUN_088ab5a4 | bytes 280 */

void FUN_088ab5a4(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = "effect/system/system_effect.mpk";
  if (param_4 != '\0') {
    pcVar4 = "effect/system/system_effect_w.mpk";
  }
  iVar1 = FUN_08862c40(pcVar4,1);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (param_2 == 0) {
      iVar2 = FUN_088a51c0(iVar1,pcVar4);
      *(int *)(param_1 + 0x10) = iVar2;
      if (iVar2 != 0) {
        iVar3 = FUN_088a5208();
      }
    }
    else if (iVar1 <= param_3) {
      *(int *)(param_1 + 0x14) = param_2;
      iVar3 = param_2;
    }
    FUN_088fe708(pcVar4,iVar3,iVar1,0);
    FUN_088fe944(pcVar4,iVar3,iVar1);
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_088a522c();
    }
    FUN_088ab378(param_1,param_4);
  }
  return;
}

