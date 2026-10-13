/* Entry 0x08810234 | file offset 0x0000D20C | FUN_08810234 | bytes 448 */

void FUN_08810234(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_60 [12];
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = DAT_089d4794;
  iVar5 = param_1 + 0x50;
  FUN_089a3868(param_1 + 0x60,iVar5);
  iVar4 = param_1 + 0x80;
  iVar1 = FUN_0886b6bc(*(undefined4 *)(param_1 + 0x98),iVar5,auStack_60,iVar4,param_1 + 0x90,
                       *(undefined4 *)(param_1 + 0xb0));
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
    FUN_089a3f40(iVar5,param_1,iVar5);
    if ((*(uint *)(param_1 + 0xbc) & 2) != 0) {
      uVar2 = FUN_08899300();
      local_44 = *(float *)(param_1 + 0x60);
      local_40 = *(float *)(param_1 + 100);
      local_3c = *(float *)(param_1 + 0x68);
      local_38 = *(undefined4 *)(iVar3 + 4);
      local_50 = *(float *)(param_1 + 0x50) - local_44;
      local_4c = *(float *)(param_1 + 0x54) - local_40;
      local_48 = *(float *)(param_1 + 0x58) - local_3c;
      iVar3 = FUN_08897960(uVar2,&local_44,&local_50,&local_34,0x36,0);
      if (iVar3 == 1) {
        *(undefined4 *)(param_1 + 0x50) = local_34;
        *(undefined4 *)(param_1 + 0x54) = local_30;
        *(undefined4 *)(param_1 + 0x58) = local_2c;
        *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
      }
    }
    if ((*(uint *)(param_1 + 0xbc) & 1) == 0) {
      local_54 = 0;
      FUN_089a3f40(auStack_60,param_1,auStack_60);
      FUN_089a38a8(param_1 + 0x70,iVar5,auStack_60);
    }
    else {
      FUN_089a3868(param_1 + 0x70,param_1 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    FUN_089a3f40(iVar4,param_1,iVar4);
  }
  return;
}

