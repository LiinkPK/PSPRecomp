/* Entry 0x088F37BC | file offset 0x000F0794 | FUN_088f37bc | bytes 704 */

void FUN_088f37bc(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_680 [1508];
  undefined1 auStack_9c [48];
  undefined *local_6c;
  int local_68;
  undefined1 *local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30;
  
  piVar8 = (int *)(param_1 + param_3 * 0xd8);
  local_38 = param_1;
  local_34 = param_3;
  iVar2 = FUN_088cb164(DAT_089d712c + 0xf58,*piVar8);
  local_30 = *(undefined1 *)(iVar2 + 0x773);
  local_40 = iVar2 + 0x10;
  local_3c = iVar2;
  FUN_088bf108(auStack_680);
  FUN_088c5e44(auStack_9c);
  local_6c = &DAT_089ccc88;
  local_48 = 0;
  local_4c = piVar8 + 1;
  local_68 = iVar2;
  local_64 = auStack_680;
  local_50 = piVar8;
  local_44 = iVar2 + 0x10;
  do {
    *(char *)(local_40 + 0x763) = (char)local_48;
    FUN_088bf238(auStack_680,local_3c,0);
    FUN_088c5e4c(auStack_9c,&local_6c,0,0);
    uVar3 = FUN_088f3764(local_38,auStack_680);
    FUN_088bf41c(auStack_680);
    iVar2 = local_44;
    iVar6 = 0;
    piVar7 = local_4c;
    do {
      iVar4 = (int)(short)*piVar7;
      FUN_088b97e8(&local_58,iVar4);
      local_60 = local_58;
      local_5c = local_54;
      if (local_58 == 0) {
        if (iVar4 != -1) {
          iVar4 = -1;
        }
      }
      else {
        bVar1 = false;
        if ((0 < *piVar8) &&
           (bVar1 = false, (*(uint *)(local_58 + 0x18) & 1 << (*piVar8 - 1U & 0x1f)) != 0)) {
          bVar1 = true;
        }
        if ((!bVar1) && ((uVar3 & 1 << ((int)*(char *)(local_58 + 0xd) & 0x1fU)) == 0)) {
          iVar4 = -1;
        }
      }
      FUN_088b765c(iVar2,iVar6,iVar4);
      iVar6 = iVar6 + 1;
      piVar7 = (int *)((int)piVar7 + 2);
    } while (iVar6 < 4);
    iVar6 = 0;
    piVar7 = local_4c;
    do {
      FUN_088b766c(iVar2,iVar6,(int)(short)piVar7[2]);
      piVar5 = local_50;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)((int)piVar7 + 2);
    } while (iVar6 < 10);
    FUN_088b767c(iVar2,(int)(char)local_50[8]);
    iVar6 = 0;
    do {
      FUN_088b7684(iVar2,iVar6,(int)*(char *)((int)piVar5 + 0x21),(int)*(char *)((int)piVar5 + 0x22)
                  );
      iVar6 = iVar6 + 1;
      piVar5 = (int *)((int)piVar5 + 2);
    } while (iVar6 < 5);
    *(undefined1 *)(iVar2 + 0xb8) = *(undefined1 *)((int)local_50 + 0x2b);
    *(char *)(iVar2 + 0xb9) = (char)local_50[0xb];
    local_48 = local_48 + 1;
    local_44 = local_44 + 0xc6;
    local_50 = (int *)((int)local_50 + 0x2a);
    local_4c = (int *)((int)local_4c + 0x2a);
  } while (local_48 < 5);
  *(undefined1 *)(local_40 + 0x763) = local_30;
  FUN_088f34b0(local_38,local_34);
  FUN_088bf17c(auStack_680,2);
  return;
}

