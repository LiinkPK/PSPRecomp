/* Entry 0x08861208 | file offset 0x0005E1E0 | FUN_08861208 | bytes 2428 */

undefined4 FUN_08861208(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar1 = FUN_08861050();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (*(char *)(param_1 + 1) == '\0') {
    uVar2 = 0;
  }
  else if (DAT_09afee54 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_089a04e8();
    iVar1 = DAT_089d5ec0;
    uVar3 = FUN_08866f34(DAT_089d5ec0);
    iVar4 = sceGeEdramGetAddr();
    uVar5 = FUN_08866ebc(iVar1);
    uVar6 = FUN_08866ef4(iVar1);
    iVar10 = DAT_089d5ec0 + 0x7e0;
    iVar11 = *(int *)(iVar1 + 0x8c0);
    fVar12 = (float)FUN_0887357c(iVar10);
    fVar13 = (float)FUN_08873584(iVar10);
    iVar10 = *(int *)(param_1 + 0x404);
    fVar21 = *(float *)(param_1 + 0x408);
    fVar15 = *(float *)(param_1 + 0x40c);
    fVar14 = *(float *)(param_1 + 0x410);
    fVar17 = *(float *)(param_1 + 0x414);
    fVar16 = *(float *)(param_1 + 0x418);
    fVar18 = *(float *)(param_1 + 0x434);
    iVar11 = param_1 + iVar11 * 0x200;
    if (0.0 < fVar18) {
      fVar20 = *(float *)(param_1 + 0x438) / fVar18;
      fVar21 = fVar21 + (*(float *)(param_1 + 0x420) - fVar21) * fVar20;
      iVar10 = (int)((float)iVar10 + (float)(*(int *)(param_1 + 0x41c) - iVar10) * fVar20);
      fVar19 = *(float *)(param_1 + 0x438) + DAT_089d5eac;
      fVar15 = fVar15 + (*(float *)(param_1 + 0x424) - fVar15) * fVar20;
      fVar14 = fVar14 + (*(float *)(param_1 + 0x428) - fVar14) * fVar20;
      *(float *)(param_1 + 0x438) = fVar19;
      fVar17 = fVar17 + (*(float *)(param_1 + 0x42c) - fVar17) * fVar20;
      fVar16 = fVar16 + (*(float *)(param_1 + 0x430) - fVar16) * fVar20;
      if (fVar19 < fVar18) {
        fVar18 = fVar19;
      }
      *(float *)(param_1 + 0x438) = fVar18;
    }
    iVar7 = 0;
    iVar8 = iVar11;
    do {
      fVar18 = (fVar13 * fVar12) /
               (((float)iVar7 / 255.0) * ((float)iVar7 / 255.0) * (fVar13 - fVar12) + fVar12);
      if (fVar18 <= fVar15) {
        fVar18 = 1.0;
      }
      else if (fVar18 <= fVar14) {
        fVar18 = 1.0 - (fVar18 - fVar15) / (fVar14 - fVar15);
      }
      else if (fVar18 <= fVar17) {
        fVar18 = 0.0;
      }
      else if (fVar18 <= fVar16) {
        fVar18 = (fVar18 - fVar17) / (fVar16 - fVar17);
      }
      else {
        fVar18 = 1.0;
      }
      iVar7 = iVar7 + 1;
      *(ushort *)(iVar8 + 2) =
           (ushort)(int)(fVar18 * 255.0) | (ushort)(((int)(fVar18 * 255.0) & 0xffffU) << 8);
      iVar8 = iVar8 + 2;
    } while (iVar7 < 0x100);
    FUN_089a0ee4();
    FUN_089a0384(9);
    FUN_089a0e8c(0,1);
    FUN_089a0e20(0,1);
    FUN_089a0e60(1,1);
    FUN_089a001c(0x3f800000,0x3f800000);
    FUN_089a0f84(0,0);
    FUN_089a0fc8();
    FUN_089a03dc(5);
    FUN_089a03dc(10);
    FUN_089a03dc(4);
    FUN_089a03dc(1);
    FUN_089a03dc(6);
    FUN_089a113c(1,0,0xff);
    FUN_089a0c8c(0xffffffff);
    FUN_089a0fe8(0,8,0xff,0);
    FUN_089a1024(0x20,iVar11 + 2);
    FUN_089a0f04(0,0x200,0x200,0x200,uVar6);
    FUN_089a0db8(6,0,0,0);
    FUN_089a0df4(0,0);
    FUN_089a0fc8();
    FUN_089a02e0(0,DAT_09afee54,0x200);
    FUN_089a0930(0xf0,0x110,0x100,0x80);
    FUN_089a094c(0,0,0,0,0,0,0);
    FUN_089a02e0(0,DAT_09afee54 + 0x200,0x200);
    FUN_089a0930(0xf0,0x110,0x100,0x80);
    FUN_089a094c(0,0,0,0xf0,0,0,0);
    FUN_089a0ee4();
    FUN_089a0f04(0,0x200,0x200,0x200,uVar5);
    FUN_089a0db8(uVar3,0,0,0);
    FUN_089a0df4(7,1);
    FUN_089a0e20(0,0);
    FUN_089a0fc8();
    FUN_089a02e0(3,DAT_09afee54,0x100);
    FUN_089a0930(iVar10 * -2 + 0x1e0,iVar10 * -2 + 0x110,0x100,0x80);
    FUN_089a094c(0,0,0,iVar10,iVar10 * 2,0,0);
    FUN_089a0384(4);
    FUN_089a12a4(0,2,3,0,0);
    FUN_089a0c8c(0x80ffffff);
    FUN_089a094c(0,0,0,iVar10 * 2,0,0,0);
    FUN_089a0c8c(0x55ffffff);
    FUN_089a094c(0,0,0,0,0,0,0);
    FUN_089a0ee4();
    iVar10 = DAT_09afee54;
    iVar11 = DAT_09afee54 + 0x20000;
    FUN_089a0f04(0,0x100,0x80,0x100,DAT_09afee54 + iVar4);
    FUN_089a0db8(3,0,0,0);
    FUN_089a0fc8();
    FUN_089a02e0(3,iVar11,0x80);
    FUN_089a03dc(4);
    FUN_089a0c8c(0xffffffff);
    FUN_089a0930(0x100,0x80,0x80,0x40);
    FUN_089a094c(0,0,0,0,0,0,0);
    FUN_089a0ee4();
    FUN_089a0f04(0,0x80,0x40,0x80,iVar11 + iVar4);
    FUN_089a0db8(3,0,0,0);
    FUN_089a0fc8();
    FUN_089a02e0(3,iVar10 + 0x28000,0x40);
    FUN_089a0930(0x80,0x40,0x40,0x20);
    FUN_089a094c(0,0,0,0,0,0,0);
    FUN_089a0ee4();
    FUN_089a0f04(0,0x40,0x20,0x40,iVar10 + 0x28000 + iVar4);
    FUN_089a0db8(3,0,0,0);
    FUN_089a0fc8();
    FUN_089a02e0(3,iVar11,0x80);
    FUN_089a0384(4);
    FUN_089a12a4(0,2,3,0,0);
    uVar9 = (int)(fVar21 * 255.0) << 0x18 | 0xffffff;
    FUN_089a0c8c(uVar9);
    FUN_089a0930(0x40,0x20,0x80,0x40);
    FUN_089a094c(0,0,0,0,0,0,0);
    FUN_089a0ee4();
    FUN_089a0f04(0,0x80,0x40,0x80,iVar11 + iVar4);
    FUN_089a0db8(3,0,0,0);
    FUN_089a0fc8();
    FUN_089a02e0(3,DAT_09afee54,0x100);
    FUN_089a0384(4);
    FUN_089a12a4(0,2,3,0,0);
    FUN_089a0c8c(uVar9);
    FUN_089a0930(0x80,0x40,0x100,0x80);
    FUN_089a094c(0,0,0,0,0,0,0);
    FUN_089a0ee4();
    FUN_089a0f04(0,0x100,0x80,0x100,DAT_09afee54 + iVar4);
    FUN_089a0db8(3,0,0,0);
    FUN_089a0df4(7,1);
    FUN_089a0e20(0,1);
    FUN_089a0fc8();
    FUN_089a0384(4);
    FUN_089a12a4(0,2,3,0,0);
    FUN_089a0c8c(uVar9);
    FUN_089a11c0(0);
    FUN_08866ae0(iVar1);
    FUN_089a0930(0x40,0x80,0x78,0x110);
    FUN_089a094c(0,0,0,0,0,0,0);
    FUN_089a094c(0x78,0,0,0x40,0,0,0);
    FUN_089a094c(0xf0,0,0,0x80,0,0,0);
    FUN_089a094c(0x168,0,0,0xc0,0,0,0);
    FUN_089a0ee4();
    FUN_089a0c8c(0xffffffff);
    FUN_089a11c0(0);
    FUN_089a0384(1);
    FUN_089a0384(6);
    FUN_089a0fc8();
    FUN_0899fdc4(uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

