/* Entry 0x088AB378 | file offset 0x000A8350 | FUN_088ab378 | bytes 392 */

void FUN_088ab378(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  char *local_40 [4];
  undefined1 auStack_30 [8];
  uint local_28;
  
  ppcVar4 = local_40;
  param_2 = param_2 & 0xff;
  if (param_1[4] == 0) {
    iVar2 = param_1[5];
  }
  else {
    local_28 = param_2;
    iVar2 = FUN_088a5208(param_1[4]);
    param_2 = local_28;
  }
  uVar1 = DAT_089d6d78;
  if (iVar2 != 0) {
    local_40[0] = "battle_system-effe.mpk";
    local_40[1] = "arrow-effe.mpk";
    local_40[2] = "crystal-effe.mpk";
    local_40[3] = "desion-effe.mpk";
    if (param_2 != 0) {
      local_40[0] = "battle_system_w-effe.mpk";
      local_40[1] = (char *)0x0;
      local_40[2] = (char *)0x0;
    }
    FUN_088698fc(auStack_30);
    iVar2 = FUN_08869954(auStack_30,iVar2);
    if (iVar2 == 0) {
      FUN_08869908(auStack_30,2);
    }
    else {
      iVar2 = 0;
      do {
        if (((*ppcVar4 != (char *)0x0) && (iVar3 = FUN_08869ab4(auStack_30,*ppcVar4), iVar3 != 0))
           && (*(int *)(iVar3 + 4) != 0)) {
          iVar3 = FUN_088a54b0(uVar1,*ppcVar4,*(int *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),0);
          *param_1 = iVar3;
          if (iVar3 != 0) {
            FUN_088a9a80();
          }
        }
        iVar2 = iVar2 + 1;
        ppcVar4 = ppcVar4 + 1;
        param_1 = param_1 + 1;
      } while (iVar2 < 4);
      FUN_08869908(auStack_30,2);
    }
  }
  return;
}

