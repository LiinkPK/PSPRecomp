/* Entry 0x0884B908 | file offset 0x000488E0 | FUN_0884b908 | bytes 504 */

void FUN_0884b908(int param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar7 = -1;
    uVar2 = FUN_08893a18(DAT_089d6ac8);
    iVar5 = *(int *)(param_1 + 0x10);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar4 = *(int *)(param_1 + 8) + iVar5 * 0x140;
        if (((param_2 == '\0') && (iVar3 = *(int *)(iVar4 + 0x124), iVar3 == 0xff)) ||
           ((param_2 == '\x01' && (iVar3 = *(int *)(iVar4 + 0x124), iVar3 != 0xff)))) {
          if (iVar7 != *(short *)(iVar4 + 0x130)) {
            FUN_0899d2f8(*(undefined4 *)(DAT_089d4d80 + *(short *)(iVar4 + 0x130) * 0x14 + 0x2590));
            cVar1 = *(char *)(*(int *)(iVar4 + 0x128) + 4);
            if (cVar1 == '\x01') {
              FUN_089a12a4(0,2,10,0,0xffffffff);
              iVar3 = *(int *)(iVar4 + 0x124);
              iVar7 = (int)*(short *)(iVar4 + 0x130);
            }
            else if (cVar1 == '\x02') {
              FUN_089a12a4(2,2,10,0,0xffffffff);
              iVar3 = *(int *)(iVar4 + 0x124);
              iVar7 = (int)*(short *)(iVar4 + 0x130);
            }
            else {
              FUN_089a12a4(0,2,3,0,0);
              iVar3 = *(int *)(iVar4 + 0x124);
              iVar7 = (int)*(short *)(iVar4 + 0x130);
            }
          }
          FUN_089a0c8c(iVar3 << 0x18 | uVar2 & 0xffffff);
          FUN_089a0520(4,0x183,(int)*(short *)(iVar4 + 300),0,iVar4 + 0x30);
        }
        iVar5 = iVar5 + 1;
        if (*(int *)(param_1 + 0xc) <= iVar5) {
          iVar5 = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x14));
    }
  }
  return;
}

