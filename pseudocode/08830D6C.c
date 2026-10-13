/* Entry 0x08830D6C | file offset 0x0002DD44 | FUN_08830d6c | bytes 576 */

void FUN_08830d6c(char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  float fVar5;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  iVar3 = *(int *)(*(int *)(param_2 + 0x84) + 8);
  if ((*param_1 != '\0') && (iVar3 != 0)) {
    uVar1 = FUN_089b0e78(iVar3,*(undefined4 *)(param_2 + 0xbc));
    iVar2 = FUN_089b1224(uVar1);
    FUN_089a3868(auStack_40,iVar2 + 0x30);
    if (*(float *)(param_1 + 0x14) < 0.0) {
      fVar5 = *(float *)(param_1 + 0x1bc);
    }
    else {
      fVar5 = *(float *)(param_1 + 0x1b8);
    }
    FUN_089a4180(*(undefined4 *)(param_1 + 0x10),auStack_c0,&DAT_09af8ac0);
    FUN_089a4124(*(float *)(param_1 + 0x14) * fVar5,auStack_c0,auStack_c0);
    FUN_089a3ebc(auStack_80);
    FUN_089a38e0(auStack_50,auStack_50,auStack_40);
    FUN_089a3fb8(auStack_80,auStack_c0,auStack_80);
    FUN_089a38a8(auStack_50,auStack_50,auStack_40);
    iVar2 = 0;
    pcVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        FUN_089b2d48(iVar3,*(undefined4 *)(pcVar4 + 0x28),auStack_80);
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x24));
    }
    uVar1 = FUN_089b0e78(iVar3,*(undefined4 *)(param_2 + 0xf0));
    iVar2 = FUN_089b1224(uVar1);
    FUN_089a3868(auStack_40,iVar2 + 0x30);
    if (*(float *)(param_1 + 0x14) < 0.0) {
      fVar5 = *(float *)(param_1 + 0x35c);
    }
    else {
      fVar5 = *(float *)(param_1 + 0x358);
    }
    FUN_089a4124(*(float *)(param_1 + 0x14) * fVar5,auStack_c0,&DAT_09af8ac0);
    FUN_089a3ebc(auStack_80);
    FUN_089a38e0(auStack_50,auStack_50,auStack_40);
    FUN_089a3fb8(auStack_80,auStack_c0,auStack_80);
    FUN_089a38a8(auStack_50,auStack_50,auStack_40);
    iVar2 = 0;
    pcVar4 = param_1;
    if (0 < *(int *)(param_1 + 0x1c4)) {
      do {
        FUN_089b2d48(iVar3,*(undefined4 *)(pcVar4 + 0x1c8),auStack_80);
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x1c4));
    }
  }
  return;
}

