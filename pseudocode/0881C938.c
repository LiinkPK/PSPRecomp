/* Entry 0x0881C938 | file offset 0x00019910 | FUN_0881c938 | bytes 424 */

undefined4 FUN_0881c938(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];
  
  if (*param_1 == '\0') {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (param_1[8] == '\x01') {
    uVar2 = 0;
  }
  else if (*(int *)(param_2 + 0x14) == 0) {
    uVar2 = 1;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x480);
    if (iVar4 == 0) {
      uVar2 = 1;
    }
    else {
      iVar5 = 0;
      do {
        do {
          do {
            iVar5 = FUN_08841f84(iVar5);
            if (iVar5 == 0) {
              return 1;
            }
            iVar1 = FUN_08837990(iVar5);
          } while ((iVar1 == 1) || (*(int *)(iVar5 + 0x484) == 0));
          iVar1 = FUN_0883e9e4(*(int *)(iVar5 + 0x484),iVar4);
          if (iVar1 != 0) {
            return 0;
          }
          puVar3 = *(undefined4 **)(iVar5 + 0x5ac);
        } while (puVar3 == (undefined4 *)0x0);
        local_34 = 0;
        local_40 = 3;
        local_3c = 0x3f800000;
        local_38 = 0x3f800000;
        local_50 = *puVar3;
        local_4c = puVar3[1];
        local_48 = puVar3[2];
        local_44 = puVar3[3];
        FUN_089a34c0(auStack_30,&local_50);
        iVar1 = FUN_0883ea64(iVar4,&local_40);
      } while (iVar1 == 0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

