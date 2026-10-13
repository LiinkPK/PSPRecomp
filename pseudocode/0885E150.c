/* Entry 0x0885E150 | file offset 0x0005B128 | FUN_0885e150 | bytes 1648 */

void FUN_0885e150(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  
  if (DAT_09afee54 != 0) {
    puVar7 = param_1 + 2;
    iVar5 = 0;
    puVar3 = puVar7;
    do {
      if ((*puVar3 & 1) != 0) break;
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 7;
    } while (iVar5 < 4);
    if (iVar5 != 4) {
      iVar5 = *(int *)(DAT_089d5ec0 + 0x8c0);
      iVar1 = sceGeEdramGetAddr();
      iVar5 = 1 - iVar5;
      if (*(char *)(DAT_089d5ec0 + 0x2ccf) == '\0') {
        iVar5 = iVar5 * 0x44000;
      }
      else {
        iVar5 = iVar5 * 0x88000;
      }
      uVar2 = FUN_089a04e8();
      FUN_089a0be4(0,0);
      FUN_089a001c(0x3f800000,0x3f800000);
      FUN_089a0f84(0,0);
      FUN_089a03dc(1);
      FUN_089a119c(1);
      FUN_089a03dc(4);
      FUN_089a03dc(7);
      FUN_089a03dc(10);
      uVar6 = *param_1;
      if ((int)uVar6 < 2) {
        uVar6 = 2;
      }
      iVar4 = DAT_09afee54 + iVar1;
      iVar12 = 0x200 >> (uVar6 & 0x1f);
      iVar9 = 0x1e0 >> (uVar6 & 0x1f);
      iVar10 = 0x110 >> (uVar6 & 0x1f);
      iVar11 = iVar12;
      if (iVar12 < 0x40) {
        iVar11 = 0x40;
      }
      FUN_089a02e0(3,DAT_09afee54,iVar11);
      FUN_089a0aec(0,0,iVar9,iVar10);
      FUN_089a1200(0,0,iVar9,iVar10);
      FUN_089a03dc(0);
      FUN_089a0384(3);
      FUN_089a123c(1,0x80,0x80);
      FUN_089a1270(1,1,1);
      FUN_0885e0a4(param_1,iVar9,iVar10,0xff000000);
      FUN_089a123c(1,0x80,0x80);
      FUN_089a1270(0,0,2);
      FUN_089a0c8c(0xffffffff);
      FUN_089a0384(9);
      FUN_089a0f04(0,0x200,0x200,0x200,iVar5 + iVar1);
      if (*(char *)(DAT_089d5ec0 + 0x2ccf) == '\0') {
        FUN_089a0db8(1,0,0,0);
      }
      else {
        FUN_089a0db8(3,0,0,0);
      }
      FUN_089a0e60(1,1);
      FUN_089a0fc8();
      FUN_089a0e20(0,1);
      if ((int)uVar6 < 4) {
        FUN_089a0930(0x78,0x110,(int)(iVar9 + ((uint)(iVar9 >> 2) >> 0x1e)) >> 2,iVar10);
        iVar8 = 0;
        iVar5 = 0;
        iVar1 = 0;
        do {
          FUN_089a094c((int)(iVar5 + ((uint)(iVar5 >> 2) >> 0x1e)) >> 2,0,0,iVar1,0,0,0);
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + iVar9;
          iVar1 = iVar1 + 0x78;
        } while (iVar8 < 4);
        uVar6 = param_1[1];
      }
      else {
        FUN_089a0930(0x1e0,0x110,iVar9,iVar10);
        FUN_089a094c(0,0,0,0,0,0,0);
        uVar6 = param_1[1];
      }
      if ((uVar6 & 2) != 0) {
        FUN_089a123c(2,0x80,0x80);
        FUN_089a1270(0,0,0);
        FUN_0885e0a4(param_1,iVar9,iVar10,0xffffffff);
      }
      FUN_089a0ee4();
      FUN_08866ae0(DAT_089d5ec0);
      FUN_089a0f04(0,iVar12,iVar12,iVar11,iVar4);
      FUN_089a0db8(3,0,0,0);
      FUN_089a0fc8();
      FUN_089a0384(0);
      FUN_089a113c(6,0,0xff);
      FUN_089a03dc(3);
      FUN_089a0384(4);
      if ((param_1[1] & 1) == 0) {
        FUN_089a03dc(6);
      }
      else {
        FUN_089a0384(6);
      }
      iVar5 = 0;
      do {
        if ((*puVar7 & 1) != 0) {
          uVar6 = puVar7[6];
          if ((int)uVar6 < 2) {
            if (-1 < (int)uVar6) {
              if ((int)uVar6 < 1) {
                FUN_089a12a4(0,2,3,0,0);
              }
              else {
                FUN_089a12a4(0,2,10,0,0xffffffff);
              }
            }
          }
          else if ((int)uVar6 < 3) {
            FUN_089a12a4(2,2,10,0,0xffffffff);
          }
          else if ((int)uVar6 < 4) {
            FUN_089a03dc(4);
          }
          FUN_089a0c8c(puVar7[5]);
          FUN_089a0e20((*puVar7 & 0xe) >> 1,1);
          fVar13 = (float)puVar7[4];
          FUN_089a0930(iVar9,iVar10,(int)(fVar13 * 480.0),(int)(fVar13 * 272.0));
          FUN_089a094c(puVar7[2] + (0xf0 - (int)(fVar13 * 240.0)),
                       puVar7[3] + (0x88 - (int)(fVar13 * 136.0)),0,0,0,0,0);
          if (puVar7[6] == 3) {
            FUN_089a0384(4);
          }
        }
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 7;
      } while (iVar5 < 4);
      FUN_089a119c(0);
      FUN_0899fdc4(uVar2);
      FUN_089a113c(6,4,0xff);
      FUN_089a0e20(0,1);
      FUN_089a12a4(0,2,3,0,0);
      FUN_089a0e60(0,0);
    }
  }
  return;
}

