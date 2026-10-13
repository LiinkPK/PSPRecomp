/* Entry 0x08830444 | file offset 0x0002D41C | FUN_08830444 | bytes 744 */

void FUN_08830444(float param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffb;
  if (*(int *)(param_2 + 0x48) != 0) {
    FUN_089a3890(param_2 + 0x10);
    if ((*(uint *)(param_2 + 0x54) & 8) == 0) {
      if ((*(uint *)(param_2 + 0x58) & 0x10) == 0) {
        FUN_0886f08c(param_1,param_2 + 0x34);
        fVar4 = *(float *)(param_2 + 0x78) + param_1;
        *(float *)(param_2 + 0x74) = *(float *)(param_2 + 0x78);
        *(float *)(param_2 + 0x7c) = *(float *)(param_2 + 0x80);
        *(float *)(param_2 + 0x78) = fVar4;
        *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + param_1;
        if (((*(uint *)(param_2 + 0x54) & 0x20) == 0) && (*(float *)(param_2 + 0x8c) <= fVar4)) {
          *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 0x20;
          FUN_089a3868(param_2 + 0x20,param_2);
          fVar4 = *(float *)(param_2 + 0x78);
        }
        *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
        *(undefined2 *)(param_2 + 0x52) = 0xffff;
        if ((*(float *)(param_2 + 0x70) <= fVar4) || ((*(uint *)(param_2 + 0x54) & 4) != 0)) {
          uVar1 = *(uint *)(param_2 + 0x58) & 0xfffffff7;
          *(uint *)(param_2 + 0x58) = uVar1;
          *(undefined2 *)(param_2 + 0x52) = *(undefined2 *)(param_2 + 0x50);
          *(uint *)(param_2 + 0x58) = uVar1 | 1;
          FUN_0882f17c(*(undefined4 *)(param_2 + 0x74),*(float *)(param_2 + 0x70),param_2);
          if ((*(float *)(param_2 + 0x70) <= *(float *)(param_2 + 0x78)) &&
             (iVar2 = FUN_0882fce8(param_2,0xffffffff), iVar2 != 0)) {
            *(float *)(param_2 + 0x78) = *(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x70);
          }
          iVar2 = *(int *)(param_2 + 0x9c);
          if (iVar2 == *(int *)(param_2 + 0x98)) {
            iVar2 = FUN_0882fce8(param_2,0xffffffff);
            if (iVar2 != 0) {
              fVar4 = *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x8c);
              *(float *)(param_2 + 0x78) = fVar4;
              if (*(float *)(param_2 + 0x70) < fVar4) {
                *(float *)(param_2 + 0x78) = *(float *)(param_2 + 0x70);
              }
              else {
                FUN_0882f17c(*(float *)(param_2 + 0x8c),0xbf800000,param_2);
                FUN_0882f17c(*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x78),param_2
                            );
              }
            }
          }
          else {
            iVar3 = param_2 + iVar2 * 0xc;
            uVar1 = iVar2 + 1;
            if ((int)uVar1 < 0) {
              uVar1 = -(-uVar1 & 0xf);
            }
            else {
              uVar1 = uVar1 & 0xf;
            }
            *(uint *)(param_2 + 0x9c) = uVar1;
            FUN_0882f0d4(*(undefined4 *)(iVar3 + 0xa4),*(undefined4 *)(iVar3 + 0xa8),param_2,
                         *(undefined4 *)(iVar3 + 0xa0));
          }
          *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 2;
        }
        else {
          FUN_0882f17c(*(undefined4 *)(param_2 + 0x74),fVar4,param_2);
        }
        FUN_08829848(param_2);
        FUN_0882f30c(*(undefined4 *)(param_2 + 0x78),param_2);
      }
      else {
        FUN_0886f08c(0,param_2 + 0x34);
        FUN_08829848(param_2);
        FUN_0882f30c(*(undefined4 *)(param_2 + 0x78),param_2);
      }
    }
    else {
      *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffff7;
    }
  }
  return;
}

