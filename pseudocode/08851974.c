/* Entry 0x08851974 | file offset 0x0004E94C | FUN_08851974 | bytes 676 */

void FUN_08851974(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_30 [16];
  
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x394) + 0x84) + 8);
    fVar6 = (float)(**(code **)(*(int *)(param_1 + 0x544) + 0x7c))
                             (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x78));
    if (*(char *)(*(int *)(param_1 + 0x2f8) + 0x24) == 'Z') {
      bVar3 = false;
      if (*(char *)(*(int *)(param_1 + 0x2f8) + 0x25) == '_') {
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x390) + 0xc);
      sVar1 = *(short *)(iVar4 + 0x32);
      sVar2 = *(short *)(iVar4 + 0x34);
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x390) + 0xc);
      sVar1 = *(short *)(iVar4 + 0x2a);
      sVar2 = *(short *)(iVar4 + 0x2c);
    }
    if ((sVar2 != -1) &&
       (iVar4 = FUN_0886cc38(*(undefined4 *)(param_1 + 0x394),(int)sVar2), iVar4 != 0)) {
      if (fVar6 <= 0.0) {
        DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
        (**(code **)(*(int *)(param_1 + 0x544) + 0x84))
                  ((float)((DAT_09afb89c >> 0x10 & 0x7fffU) % 5 + 2),
                   param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x80));
        iVar4 = FUN_089b0e78(uVar5,(int)sVar1);
        if (iVar4 != 0) {
          if (**(int **)(param_1 + 0x394) == 0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = *(float *)(**(int **)(param_1 + 0x394) + sVar1 * 4);
          }
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a383c((float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * fVar6,0,0,0x3f800000,
                       auStack_30);
          uVar5 = FUN_089b1224(iVar4);
          FUN_089a3f40(auStack_30,uVar5,auStack_30);
          FUN_089a3f40(auStack_30,param_1 + 0x330,auStack_30);
          FUN_08852068(DAT_089d4dc8 + 0x65e0,auStack_30,
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x390) + 0xc) + 0x18));
        }
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x544) + 0x84))
                  (fVar6 - DAT_089d5eac,param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x80));
      }
    }
  }
  return;
}

