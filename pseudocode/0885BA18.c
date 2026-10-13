/* Entry 0x0885BA18 | file offset 0x000589F0 | FUN_0885ba18 | bytes 556 */

void FUN_0885ba18(char *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float local_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined4 local_54;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_0883739c(param_2);
    if (iVar1 == 1) {
      if ((*(int *)(param_2 + 0x5a4) != 0) &&
         ((*(byte *)(*(int *)(param_2 + 0x5a4) + 0x69) & 4) != 0)) {
        return;
      }
      uVar2 = *param_4;
    }
    else {
      uVar2 = *param_4;
    }
    local_8c = (float)param_4[1];
    uVar3 = param_4[2];
    iVar1 = -1;
    if (param_3 == 0x1e) {
      iVar1 = 10;
      local_8c = local_8c + 0.02;
    }
    else if (param_3 == 10) {
      iVar1 = 0xc;
    }
    else if (param_3 == 4) {
      iVar1 = 0xb;
    }
    if ((((-1 < iVar1) && (*(int *)(DAT_089d6ae0 + 8) != 0)) &&
        (iVar1 = FUN_088a9de8(*(int *)(DAT_089d6ae0 + 8),iVar1,0,0,0), iVar1 != 0)) &&
       (FUN_088a7284(uVar2,local_8c,uVar3,iVar1), param_3 == 0x1e)) {
      FUN_089a3b30(auStack_70,&DAT_09af8aa0,param_5);
      FUN_089a3bc8(auStack_70,auStack_70);
      FUN_089a3b30(auStack_80,param_5,auStack_70);
      FUN_089a3bc8(auStack_80,auStack_80);
      FUN_089a3ebc(auStack_60);
      FUN_089a3868(auStack_60,auStack_80);
      FUN_089a3868(auStack_50,param_5);
      FUN_089a3868(auStack_40,auStack_70);
      local_34 = 0;
      local_44 = 0;
      local_54 = 0;
      FUN_088a731c(iVar1,auStack_60);
    }
  }
  return;
}

