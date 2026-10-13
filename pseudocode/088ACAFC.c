/* Entry 0x088ACAFC | file offset 0x000A9AD4 | FUN_088acafc | bytes 656 */

void FUN_088acafc(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0xeac) == 1) {
    iVar2 = *(int *)(param_1 + 0x210);
    if (iVar2 == 1) {
      FUN_088ac1ac(param_1,5,*(undefined1 *)(param_1 + 0xefc));
    }
    else if (iVar2 == 0) {
      FUN_088ac294(param_1,4);
    }
    else if (iVar2 == 5) {
      FUN_088ac1ac(param_1,5,*(undefined1 *)(param_1 + 0xefc));
    }
    else {
      bVar1 = true;
    }
    *(undefined4 *)(param_1 + 0xeac) = 0;
  }
  else {
    iVar2 = FUN_088acee0(param_1,*(int *)(param_1 + 0xeac),param_2);
    if (iVar2 == -1) {
      if (*(int *)(param_1 + 0xeac) == 0xe) {
        if (param_2 == 2) {
          *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffbff;
          iVar5 = DAT_089d712c + 0x3f63c;
          iVar6 = DAT_089d712c + 0x3e8c8;
          iVar2 = FUN_08920970(iVar5);
          if (-1 < iVar2) {
            FUN_089127c4(iVar6 + iVar2 * 0x280);
          }
          FUN_08920978(iVar5);
        }
        else {
          FUN_088abd7c(param_1);
          *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0x400;
        }
      }
      bVar1 = true;
      *(undefined4 *)(param_1 + 0xeac) = 0;
    }
    else {
      *(int *)(param_1 + 0xeac) = iVar2;
      if (iVar2 == 0xf) {
        FUN_088ac1ac(param_1,5,*(undefined1 *)(param_1 + 0xefc));
        *(undefined4 *)(param_1 + 0xeac) = 0xc;
      }
      else if ((iVar2 == 0x10) || (iVar2 == 0x11)) {
        FUN_088ac7ec(param_1);
        uVar3 = 0xc;
        if (iVar2 == 0x10) {
          uVar3 = 0;
        }
        *(undefined4 *)(param_1 + 0xeac) = uVar3;
      }
      else if (iVar2 == 0x12) {
        FUN_088ac7c4(param_1);
        *(undefined4 *)(param_1 + 0xeac) = 8;
      }
      else {
        FUN_088acdf8(param_1,*(undefined4 *)(param_1 + 0xeac),*(undefined4 *)(param_1 + 0xeb4),0);
      }
    }
  }
  if (bVar1) {
    if ((*(uint *)(param_1 + 0xef8) & 2) == 0) {
      FUN_088b1764(DAT_089d7280);
    }
    FUN_08872a18();
    uVar4 = *(uint *)(param_1 + 0xef8);
    if ((uVar4 & 4) != 0) {
      uVar4 = uVar4 & 0xfffffffb;
      *(uint *)(param_1 + 0xef8) = uVar4;
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 & 0xfffffdfe;
      *(uint *)(param_1 + 0xef8) = uVar4;
    }
    if ((uVar4 & 0x8000) != 0) {
      *(uint *)(param_1 + 0xef8) = uVar4 & 0xffff7dff;
    }
  }
  return;
}

