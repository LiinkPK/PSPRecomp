/* Entry 0x0885B308 | file offset 0x000582E0 | FUN_0885b308 | bytes 528 */

void FUN_0885b308(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 auStack_70 [16];
  
  if (param_1[0x12c5] != 0) {
    iVar5 = 0;
    FUN_08935524(auStack_70,&DAT_089d4dd0,0x40);
    FUN_0899d2f8(*param_1);
    FUN_089a0384(0x15);
    FUN_089a12a4(0,2,10,0,0xffffffff);
    FUN_089a3a44(0x3e4ccccd,auStack_90,DAT_089d5ec0 + 2000);
    puVar1 = (undefined4 *)FUN_0885cd44(0x3840);
    iVar3 = 0;
    if (0 < (int)param_1[0x12c5]) {
      iVar2 = param_1[0x12c4];
      puVar4 = puVar1;
      while( true ) {
        iVar2 = (iVar2 + iVar3) % 300;
        if (0.0 <= (float)param_1[iVar2 * 0x10 + 0x10]) {
          FUN_089a3a44(param_1[iVar2 * 0x10 + 0x11],auStack_80,auStack_90);
          FUN_089a34f4(puVar4 + 3,param_1 + iVar2 * 0x10 + 4,auStack_80);
          *puVar4 = auStack_70[(uint)*(byte *)(param_1 + iVar2 * 0x10 + 0x13) * 4];
          puVar4[1] = auStack_70[(uint)*(byte *)(param_1 + iVar2 * 0x10 + 0x13) * 4 + 1];
          puVar4[2] = param_1[iVar2 * 0x10 + 0x12];
          FUN_089a3528(puVar4 + 9,param_1 + iVar2 * 0x10 + 4,auStack_80);
          puVar4[6] = auStack_70[(uint)*(byte *)(param_1 + iVar2 * 0x10 + 0x13) * 4 + 2];
          puVar4[7] = auStack_70[(uint)*(byte *)(param_1 + iVar2 * 0x10 + 0x13) * 4 + 3];
          iVar5 = iVar5 + 2;
          puVar4[8] = param_1[iVar2 * 0x10 + 0x12];
          puVar4 = puVar4 + 0xc;
        }
        iVar3 = iVar3 + 1;
        if ((int)param_1[0x12c5] <= iVar3) break;
        iVar2 = param_1[0x12c4];
      }
    }
    FUN_089a0520(6,0x19f,iVar5,0,puVar1);
    FUN_089a03dc(0x15);
  }
  return;
}

