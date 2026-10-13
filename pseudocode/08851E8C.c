/* Entry 0x08851E8C | file offset 0x0004EE64 | FUN_08851e8c | bytes 476 */

void FUN_08851e8c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined1 auStack_70 [64];
  
  if (param_1[0xf5] != 0) {
    iVar5 = 0;
    FUN_0899d2f8(*param_1);
    FUN_089a12a4(0,2,3,0,0);
    iVar1 = FUN_0885cd44(0x3c0);
    FUN_089a3efc(auStack_70,DAT_089d5ec0 + 0x790);
    iVar4 = 0;
    if (0 < (int)param_1[0xf5]) {
      iVar2 = param_1[0xf4];
      iVar3 = iVar1;
      while( true ) {
        iVar2 = (iVar2 + iVar4) % 0x14;
        if (0.0 < (float)param_1[iVar2 * 0xc + 8]) {
          fVar6 = (float)FUN_08867eec(param_1[iVar2 * 0xc + 0xb]);
          local_80 = -(((fVar6 + 1.0) * 0.5 + 0.5) * (float)param_1[iVar2 * 0xc + 9]);
          fVar6 = (float)FUN_08867eec(param_1[iVar2 * 0xc + 0xd]);
          local_78 = 0;
          local_7c = -(((fVar6 + 1.0) * 0.5 + 0.5) * (float)param_1[iVar2 * 0xc + 9]);
          FUN_089a3f68(&local_80,auStack_70,&local_80);
          FUN_0885cd60(iVar3,param_1 + iVar2 * 0xc + 4,&local_80,param_1[iVar2 * 0xc + 10]);
          iVar5 = iVar5 + 2;
          iVar3 = iVar3 + 0x30;
        }
        iVar4 = iVar4 + 1;
        if ((int)param_1[0xf5] <= iVar4) break;
        iVar2 = param_1[0xf4];
      }
    }
    FUN_089a0520(6,0x19f,iVar5,0,iVar1);
  }
  return;
}

