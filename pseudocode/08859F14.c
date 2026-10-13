/* Entry 0x08859F14 | file offset 0x00056EEC | FUN_08859f14 | bytes 708 */

void FUN_08859f14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_50;
  
  if ((param_1[0xf5] != 0) && (*param_1 != 0)) {
    FUN_0899d2f8(*param_1);
    FUN_089a12a4(0,2,10,0,0xffffffff);
    iVar1 = FUN_0885cd44(0x5a0);
    iVar3 = 0;
    iVar4 = 0;
    local_50 = iVar1;
    if (0 < param_1[0xf5]) {
      iVar2 = param_1[0xf4];
      while( true ) {
        iVar2 = (iVar2 + iVar3) % 0x1e;
        fVar6 = (float)param_1[iVar2 * 8 + 9];
        if (0.0 < fVar6) {
          fVar5 = (float)param_1[iVar2 * 8 + 10];
          if (26.0 < fVar6) {
            fVar7 = ((30.0 - fVar6) / 6.0) * fVar5;
            if (fVar7 < 0.0) {
              fVar5 = 0.0;
            }
            else if (fVar7 <= fVar5) {
              fVar5 = fVar7;
            }
          }
          FUN_089a3a44(fVar5,auStack_a0,DAT_089d5ec0 + 2000);
          if (param_1[iVar2 * 8 + 8] == 0) {
            FUN_089a3868(auStack_b0,param_1 + iVar2 * 8 + 4);
          }
          else {
            FUN_089a38a8(&local_70,param_1[iVar2 * 8 + 8] + 0x80,param_1 + iVar2 * 8 + 4);
            local_80 = local_70;
            local_8c = local_6c;
            local_90 = local_70;
            local_88 = local_68;
            local_84 = local_64;
            FUN_089a3868(auStack_b0,&local_90);
          }
          FUN_0885cd60(iVar1,auStack_b0,auStack_a0,(int)((fVar6 / 30.0) * 255.0) << 0x18 | 0xffffff)
          ;
          iVar4 = iVar4 + 2;
          iVar1 = iVar1 + 0x30;
        }
        iVar3 = iVar3 + 1;
        if (param_1[0xf5] <= iVar3) break;
        iVar2 = param_1[0xf4];
      }
    }
    FUN_089a0520(6,0x19f,iVar4,0,local_50);
  }
  return;
}

