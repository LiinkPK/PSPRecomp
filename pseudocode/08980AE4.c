/* Entry 0x08980AE4 | file offset 0x0017DABC | FUN_08980ae4 | bytes 804 */

void FUN_08980ae4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5,
                 char param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  iVar3 = *(int *)(param_4 + 4);
  if (param_6 == '\0') {
    if (iVar3 == 0) {
      FUN_089a3918(auStack_a0,&DAT_089da410,param_2);
      FUN_089a3a84(0,0x3f800000,auStack_a0,auStack_a0);
      uVar2 = FUN_089a48cc(auStack_a0);
      iVar3 = 0;
      if (0 < param_3) {
        do {
          *param_5 = uVar2;
          iVar3 = iVar3 + 1;
          param_5 = param_5 + 1;
        } while (iVar3 < param_3);
      }
    }
    else {
      if (iVar3 == 1) {
        FUN_089a3918(auStack_90,&DAT_089da410,param_2);
        FUN_089a3a84(0,0x3f800000,auStack_90,auStack_90);
        uVar1 = FUN_089a4818(auStack_90);
      }
      else if (iVar3 == 2) {
        FUN_089a3918(auStack_80,&DAT_089da410,param_2);
        FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
        uVar1 = FUN_089a4928(0,auStack_80);
      }
      else {
        FUN_089a3918(auStack_70,&DAT_089da410,param_2);
        FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
        uVar1 = FUN_089a48f0(auStack_70);
      }
      iVar3 = 0;
      if (0 < param_3) {
        do {
          *(undefined2 *)param_5 = uVar1;
          iVar3 = iVar3 + 1;
          param_5 = (undefined4 *)((int)param_5 + 2);
        } while (iVar3 < param_3);
      }
    }
  }
  else if (iVar3 == 0) {
    FUN_089a3918(auStack_60,&DAT_089da410,param_2);
    FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
    uVar2 = FUN_089a48cc(auStack_60);
    iVar3 = 0;
    if (0 < param_3) {
      param_5 = param_5 + ((*(uint *)(param_4 + 8) >> 2) - 1);
      do {
        *param_5 = uVar2;
        iVar3 = iVar3 + 1;
        param_5 = param_5 + -1;
      } while (iVar3 < param_3);
    }
  }
  else {
    if (iVar3 == 1) {
      FUN_089a3918(auStack_50,&DAT_089da410,param_2);
      FUN_089a3a84(0,0x3f800000,auStack_50,auStack_50);
      uVar1 = FUN_089a4818(auStack_50);
      iVar3 = (*(uint *)(param_4 + 8) >> 1) - 1;
    }
    else if (iVar3 == 2) {
      FUN_089a3918(auStack_40,&DAT_089da410,param_2);
      FUN_089a3a84(0,0x3f800000,auStack_40,auStack_40);
      uVar1 = FUN_089a4928(0,auStack_40);
      iVar3 = (*(uint *)(param_4 + 8) >> 1) - 1;
    }
    else {
      FUN_089a3918(auStack_30,&DAT_089da410,param_2);
      FUN_089a3a84(0,0x3f800000,auStack_30,auStack_30);
      uVar1 = FUN_089a48f0(auStack_30);
      iVar3 = (*(uint *)(param_4 + 8) >> 1) - 1;
    }
    iVar4 = 0;
    if (0 < param_3) {
      puVar5 = (undefined2 *)((int)param_5 + iVar3 * 2);
      do {
        *puVar5 = uVar1;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + -1;
      } while (iVar4 < param_3);
    }
  }
  return;
}

