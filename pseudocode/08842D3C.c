/* Entry 0x08842D3C | file offset 0x0003FD14 | Progression_AddExperience_original | bytes 228 */

undefined4 Progression_AddExperience_original(byte *param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  *param_2 = 0;
  bVar3 = *param_1;
  param_3 = param_3 + (uint)uVar1;
  uVar5 = 0;
  if ((bVar3 < 100) && (uVar4 = (uint)*(ushort *)(param_1 + 0x12), (int)uVar4 <= param_3)) {
    do {
      *param_1 = bVar3 + 1;
      param_3 = param_3 - uVar4;
      uVar5 = 1;
      bVar3 = *param_1;
      if (param_4 != 0) {
        uVar2 = Progression_ExperienceRequirement_times5(param_4,bVar3);
        *(undefined2 *)(param_1 + 0x12) = uVar2;
        bVar3 = *param_1;
      }
    } while ((bVar3 != 100) && (uVar4 = (uint)*(ushort *)(param_1 + 0x12), (int)uVar4 <= param_3));
  }
  if (bVar3 == 100) {
    *param_2 = param_3;
    param_3 = 0;
  }
  *(short *)(param_1 + 0x10) = (short)param_3;
  return uVar5;
}

