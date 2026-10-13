/* Entry 0x08824AA8 | file offset 0x00021A80 | FUN_08824aa8 | bytes 888 */

undefined4 FUN_08824aa8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  FUN_088223a8();
  if (param_2 == 0) {
    return 0xffffffff;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffe01f;
  *(undefined1 *)(param_1 + 0x30) = 0;
  iVar8 = 0;
  while (iVar8 = FUN_08835134(param_2,0,iVar8), iVar2 = iVar8, iVar8 != 0) {
    do {
      iVar2 = FUN_08835134(param_2,0,iVar2);
      if (iVar2 == 0) {
        cVar1 = *(char *)(param_1 + 0x30);
        goto LAB_08824b6c;
      }
    } while (*(short *)(iVar8 + 6) != *(short *)(iVar2 + 6));
    cVar1 = *(char *)(param_1 + 0x30);
LAB_08824b6c:
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x20) =
           *(uint *)(param_1 + 0x20) & 0xffffe01f |
           (((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x7f & 0xff) << 5;
    }
    *(char *)(param_1 + 0x30) = cVar1 + '\x01';
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar8 = FUN_08842100((((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80) * 0x130);
    *(int *)(param_1 + 0x28) = iVar8;
    if (iVar8 == 0) {
      return 0xfffffffe;
    }
    iVar8 = FUN_08842100((int)*(char *)(param_1 + 0x30) << 7);
    *(int *)(param_1 + 0x2c) = iVar8;
    if (iVar8 == 0) {
      return 0xfffffffd;
    }
  }
  iVar2 = 0;
  iVar8 = 0;
  do {
    iVar8 = FUN_08835134(param_2,0,iVar8);
    if (iVar8 == 0) {
      uVar3 = *(uint *)(param_1 + 0x20);
      iVar2 = 0;
      iVar8 = ((uVar3 & 0x1fe0) >> 5 ^ 0x80) - 0x80;
      bVar6 = 0;
      if (0 < iVar8) {
        iVar5 = *(int *)(param_1 + 0x28);
        iVar4 = 0;
        do {
          *(byte *)(iVar5 + iVar4 + 0x129) = *(byte *)(iVar5 + iVar4 + 0x129) & 0x80 | bVar6 & 0x7f;
          iVar5 = *(int *)(param_1 + 0x28);
          uVar3 = *(uint *)(param_1 + 0x20);
          bVar6 = bVar6 + (*(byte *)(iVar5 + iVar4 + 0x12a) & 0x3f);
          iVar2 = iVar2 + 1;
          iVar8 = ((uVar3 & 0x1fe0) >> 5 ^ 0x80) - 0x80;
          iVar4 = iVar4 + 0x130;
        } while (iVar2 < iVar8);
      }
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          iVar4 = 0;
          while (iVar4 = FUN_08835134(param_2,0,iVar4), iVar4 != 0) {
            if ((ushort)*(byte *)(*(int *)(param_1 + 0x28) + iVar5 + 0x128) ==
                *(ushort *)(iVar4 + 6)) {
              *(int *)(*(int *)(param_1 + 0x2c) + iVar8 + 0x70) = iVar4;
              *(char *)(*(int *)(param_1 + 0x2c) + iVar8 + 0x7e) = (char)iVar2;
              iVar8 = iVar8 + 0x80;
            }
          }
          uVar3 = *(uint *)(param_1 + 0x20);
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0x130;
        } while (iVar2 < (int)(((uVar3 & 0x1fe0) >> 5 ^ 0x80) - 0x80));
      }
      *(int *)(param_1 + 0x24) = param_2;
      *(uint *)(param_1 + 0x20) = uVar3 | 1;
      FUN_08824e24(param_1);
      return 0;
    }
    iVar4 = 0;
    iVar7 = *(int *)(param_1 + 0x28);
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        if ((ushort)*(byte *)(iVar7 + 0x128) == *(ushort *)(iVar8 + 6)) break;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x130;
        iVar7 = iVar7 + 0x130;
      } while (iVar4 < iVar2);
    }
    if (iVar4 == iVar2) {
      *(char *)(iVar7 + 0x128) = (char)*(undefined2 *)(iVar8 + 6);
      iVar2 = iVar2 + 1;
      iVar5 = *(int *)(param_1 + 0x28) + iVar5;
      *(byte *)(iVar5 + 0x12a) = *(byte *)(iVar5 + 0x12a) & 0xc0 | 1;
    }
    else {
      *(byte *)(iVar7 + 0x12a) =
           *(byte *)(iVar7 + 0x12a) & 0xc0 | (*(byte *)(iVar7 + 0x12a) & 0x3f) + 1 & 0x3f;
    }
  } while( true );
}

