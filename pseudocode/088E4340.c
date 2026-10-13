/* Entry 0x088E4340 | file offset 0x000E1318 | FUN_088e4340 | bytes 4268 */

void FUN_088e4340(int param_1,ushort *param_2)

{
  short sVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  uVar2 = *param_2;
  if (uVar2 < 0x65) {
    if (uVar2 < 0x47) {
      if (uVar2 < 0x46) {
        return;
      }
      iVar5 = 0;
      do {
        if (*(char *)(param_1 + iVar5 * 0x44 + 0x6ea) == '\0') {
          iVar6 = param_1 + iVar5 * 0x44;
          *(int *)(param_1 + 0x7b8) = iVar5;
          if (iVar5 == 0) {
            *(undefined1 *)(iVar6 + 0x6eb) = 1;
          }
          *(char *)(iVar6 + 0x6e9) = (char)*(undefined4 *)(param_2 + 4);
          *(undefined1 *)(iVar6 + 0x6ea) = 1;
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      return;
    }
    if (uVar2 < 0x48) {
      iVar5 = param_1 + *(int *)(param_1 + 0x7b8) * 0x44;
      puVar3 = (undefined2 *)FUN_088e3924(param_1);
      if (puVar3 == (undefined2 *)0x0) {
        return;
      }
      uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(int *)(param_2 + 6) * 4 + 0x60),
                           *(undefined4 *)(param_2 + 8),0);
      *(undefined4 *)(puVar3 + 2) = uVar4;
      FUN_088d9cfc(uVar4);
      *puVar3 = (short)*(undefined4 *)(param_2 + 6);
      puVar3[1] = (short)*(undefined4 *)(param_2 + 8);
      *(undefined2 **)(iVar5 + 0x6a8 + *(char *)(iVar5 + 0x6e8) * 4) = puVar3;
      iVar6 = FUN_088e38d8(param_1,param_2);
      if (-1 < iVar6) {
        uVar9 = *(undefined4 *)(param_1 + 0x390);
        uVar4 = FUN_088e38d8(param_1,param_2);
        uVar4 = FUN_0887ad78(uVar9,0,uVar4,0,0,0);
        *(undefined4 *)(iVar5 + 0x6a8 + *(char *)(iVar5 + 0x6e8) * 4 + 0x20) = uVar4;
      }
      *(char *)(iVar5 + 0x6e8) = *(char *)(iVar5 + 0x6e8) + '\x01';
      return;
    }
    if (uVar2 < 100) {
      return;
    }
    puVar3 = (undefined2 *)FUN_088e3924(param_1);
    if (puVar3 == (undefined2 *)0x0) {
      return;
    }
    uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(int *)(param_2 + 4) * 4 + 0x60),
                         *(undefined4 *)(param_2 + 6),0);
    *(undefined4 *)(puVar3 + 2) = uVar4;
    *puVar3 = (short)*(undefined4 *)(param_2 + 4);
    puVar3[1] = (short)*(undefined4 *)(param_2 + 6);
    return;
  }
  if (uVar2 < 0x67) {
    if (uVar2 < 0x66) {
      puVar3 = (undefined2 *)
               FUN_088e3970(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
      if (*(int *)(puVar3 + 2) != 0) {
        FUN_088da060(*(undefined4 *)(puVar3 + 2));
        *(undefined4 *)(puVar3 + 2) = 0;
      }
      *puVar3 = 0xffff;
      puVar3[1] = 0xffff;
      *(undefined4 *)(puVar3 + 2) = 0;
      return;
    }
    puVar3 = (undefined2 *)FUN_088e3924(param_1);
    if (puVar3 == (undefined2 *)0x0) {
      return;
    }
    uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(int *)(param_2 + 8) * 4 + 0x60),
                         *(undefined4 *)(param_2 + 10),0);
    *(undefined4 *)(puVar3 + 2) = uVar4;
    FUN_088d9c60(uVar4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
    *puVar3 = (short)*(undefined4 *)(param_2 + 8);
    puVar3[1] = (short)*(undefined4 *)(param_2 + 10);
    return;
  }
  switch(uVar2) {
  case 200:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x364) == 0) {
        uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(int *)(param_2 + 6) * 4 + 0x60),
                             *(undefined4 *)(param_2 + 8),0);
        *(undefined4 *)(param_1 + 0x364) = uVar4;
      }
      if (*(int *)(param_1 + *(int *)(param_1 + 0x67c) * 4 + 0x394) != 0) {
        FUN_0887b944(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x67c) * 4 + 0x394));
      }
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x680)) {
        do {
          sVar1 = *(short *)(param_1 + iVar5 * 2 + 0x524);
          iVar6 = FUN_088e38d8(param_1,param_2);
          if (sVar1 == iVar6) {
            *(int *)(param_1 + 0x67c) = iVar5;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x680));
      }
      iVar5 = 0;
      do {
        iVar6 = FUN_088f47e0(0xf);
        FUN_088da0a8(*(undefined4 *)(param_1 + 0x364),iVar5,auStack_100,auStack_c0);
        if (*(int *)(param_1 + 0x678) == 0 && iVar6 != 0) {
          if (iVar5 == 0) {
            iVar6 = *(int *)(param_1 + *(int *)(param_1 + 0x67c) * 4 + 0x394);
          }
          else {
            if ((*(int *)(param_1 + iVar5 * 4 + 0x5e8) != 0) &&
               (*(int *)(param_1 + iVar5 * 4 + 0x5e8) != 0)) {
              iVar6 = param_1 + iVar5 * 4;
              FUN_0887ba5c(*(undefined4 *)(iVar6 + 0x5e8));
              *(undefined4 *)(iVar6 + 0x5e8) = 0;
            }
            iVar6 = FUN_0887e534(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x67c) * 4 + 0x394));
            *(int *)(param_1 + iVar5 * 4 + 0x5e8) = iVar6;
            *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0x800;
          }
          FUN_0887ba04(iVar6);
          FUN_0887b828(iVar6,auStack_c0);
          FUN_0887b778(iVar6,auStack_100);
          FUN_0887b98c(iVar6);
          FUN_0887b9c4(iVar6);
          iVar8 = (int)*(short *)(*(int *)(param_1 + 0x364) + 0xc);
          iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x364) + 0x24) + 0xc);
          if (iVar8 < *(int *)(iVar7 + 0x2c)) {
            iVar8 = *(int *)(iVar7 + 0xc) + iVar8 * 0x1c;
          }
          else {
            iVar8 = 0;
          }
          FUN_0887b900(iVar6,*(undefined4 *)(iVar8 + 8));
          FUN_0887b924(iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
    }
    break;
  case 0xc9:
    goto switchD_088e43e4_caseD_c9;
  case 0xcd:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (iVar5 != 0) {
      return;
    }
    iVar5 = FUN_088e3970(param_1,*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8));
    if (*(int *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) != 0) {
      FUN_0887b944(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    }
    iVar6 = *(int *)(param_1 + 0x684) + 1;
    *(int *)(param_1 + 0x684) = iVar6;
    if (1 < iVar6) {
      *(undefined4 *)(param_1 + 0x684) = 0;
    }
    FUN_088da0a8(*(undefined4 *)(iVar5 + 4),0,auStack_b0,auStack_70);
    if ((*(int *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) != 0) &&
       (*(int *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) != 0)) {
      FUN_0887ba5c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) = 0;
    }
    if (*(int *)(param_2 + 0xe) == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x390);
      uVar4 = FUN_088e38d8(param_1,param_2);
      uVar4 = FUN_0887ad78(uVar9,0,uVar4,0,0,0);
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) = uVar4;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x390);
      uVar4 = FUN_088e38d8(param_1,param_2);
      uVar4 = FUN_0887aeac(uVar9,0,uVar4,0,0);
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) = uVar4;
    }
    FUN_0887ba04(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    FUN_0887b828(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc),auStack_70);
    FUN_0887b778(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc),auStack_b0);
    iVar6 = (int)*(short *)(*(int *)(iVar5 + 4) + 0xc);
    iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x24) + 0xc);
    if (iVar6 < *(int *)(iVar5 + 0x2c)) {
      iVar5 = *(int *)(iVar5 + 0xc) + iVar6 * 0x1c;
    }
    else {
      iVar5 = 0;
    }
    FUN_0887b900(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc),
                 *(undefined4 *)(iVar5 + 8));
    iVar5 = *(int *)(param_2 + 10);
    if (iVar5 < 2) {
      if (iVar5 < 1) {
LAB_088e4a18:
        FUN_0887b98c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
      }
      else {
        FUN_0887b970(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
      }
    }
    else {
      if (2 < iVar5) goto LAB_088e4a18;
      FUN_0887b958(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    }
    iVar5 = *(int *)(param_2 + 0xc);
    if (iVar5 < 2) {
      if (0 < iVar5) {
        FUN_0887b9a4(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
        return;
      }
    }
    else if (iVar5 < 3) {
      FUN_0887b9e4(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
      return;
    }
    FUN_0887b9c4(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    break;
  case 0xce:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (iVar5 == 0) {
      iVar5 = 0;
      do {
        if (*(int *)(param_1 + iVar5 * 4 + 0x5fc) != 0) {
          FUN_0887b944(*(undefined4 *)(param_1 + iVar5 * 4 + 0x5fc));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
    break;
  case 0xd0:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 8);
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0xc);
      if (0 < *(int *)(param_1 + 0x68c)) {
        do {
          sVar1 = *(short *)(param_1 + iVar5 * 2 + 0x644);
          iVar6 = FUN_088e38d8(param_1,param_2);
          if (sVar1 == iVar6) {
            *(int *)(param_1 + 0x688) = iVar5;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x68c));
      }
      if (*(int *)(param_1 + 0x36c) == 0) {
        *(short *)(param_1 + 0x368) = (short)*(undefined4 *)(param_2 + 6);
        *(short *)(param_1 + 0x36a) = (short)*(undefined4 *)(param_1 + 0x378);
        uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x368) * 4 + 0x60),
                             (int)*(short *)(param_1 + 0x36a),0);
        *(undefined4 *)(param_1 + 0x36c) = uVar4;
      }
      FUN_0887b924(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x688) * 4 + 0x604));
    }
    break;
  case 0xd1:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (((iVar5 == 0) && (*(int *)(param_1 + 0x36c) != 0)) &&
       ((int)*(short *)(param_1 + 0x36a) == *(int *)(param_1 + 0x37c))) {
      if (*(int *)(param_1 + 0x36c) != 0) {
        FUN_088da060(*(undefined4 *)(param_1 + 0x36c));
        *(undefined4 *)(param_1 + 0x36c) = 0;
      }
      *(short *)(param_1 + 0x36a) = (short)*(undefined4 *)(param_1 + 0x380);
      uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x368) * 4 + 0x60),
                           (int)*(short *)(param_1 + 0x36a),0);
      *(undefined4 *)(param_1 + 0x36c) = uVar4;
    }
    break;
  case 0xd2:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0xc);
      if (*(int *)(param_1 + 0x36c) == 0) {
        *(short *)(param_1 + 0x368) = (short)*(undefined4 *)(param_2 + 6);
        *(short *)(param_1 + 0x36a) = (short)*(undefined4 *)(param_1 + 0x378);
        uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x368) * 4 + 0x60),
                             (int)*(short *)(param_1 + 0x36a),0);
        *(undefined4 *)(param_1 + 0x36c) = uVar4;
      }
      if (*(int *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c) != 0) {
        FUN_0887b944(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c));
      }
      iVar5 = *(int *)(param_1 + 0x690) + 1;
      *(int *)(param_1 + 0x690) = iVar5;
      if (1 < iVar5) {
        *(undefined4 *)(param_1 + 0x690) = 0;
      }
      if ((*(int *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c) != 0) &&
         (*(int *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c) != 0)) {
        FUN_0887ba5c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c));
        *(undefined4 *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c) = 0;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x390);
      uVar4 = FUN_088e38d8(param_1,param_2);
      uVar4 = FUN_0887ad78(uVar9,0,uVar4,0,0,0);
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x690) * 4 + 0x63c) = uVar4;
    }
    break;
  case 0xd3:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (((iVar5 == 0) && (*(int *)(param_1 + 0x36c) != 0)) &&
       ((int)*(short *)(param_1 + 0x36a) == *(int *)(param_1 + 0x37c))) {
      if (*(int *)(param_1 + 0x36c) != 0) {
        FUN_088da060(*(undefined4 *)(param_1 + 0x36c));
        *(undefined4 *)(param_1 + 0x36c) = 0;
      }
      *(short *)(param_1 + 0x36a) = (short)*(undefined4 *)(param_1 + 0x380);
      uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x368) * 4 + 0x60),
                           (int)*(short *)(param_1 + 0x36a),0);
      *(undefined4 *)(param_1 + 0x36c) = uVar4;
    }
    break;
  case 0xd4:
    iVar5 = FUN_088678dc();
    goto joined_r0x088e472c;
  case 0xd5:
    iVar5 = FUN_08867900();
joined_r0x088e472c:
    if (iVar5 != 0) {
switchD_088e43e4_caseD_c9:
      iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
      if (iVar5 == 0) {
        if (*(int *)(param_1 + *(int *)(param_1 + 0x67c) * 4 + 0x394) != 0) {
          FUN_0887b944(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x67c) * 4 + 0x394));
        }
        iVar5 = 0;
        do {
          if (*(int *)(param_1 + iVar5 * 4 + 0x5ec) != 0) {
            FUN_0887b944(*(undefined4 *)(param_1 + iVar5 * 4 + 0x5ec));
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 4);
      }
    }
    break;
  case 0xd6:
  case 0xd9:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 0xc);
      if (*(int *)(param_1 + 0x374) == 0) {
        *(short *)(param_1 + 0x370) = (short)*(undefined4 *)(param_2 + 6);
        *(short *)(param_1 + 0x372) = (short)*(undefined4 *)(param_1 + 900);
        uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x370) * 4 + 0x60),
                             (int)*(short *)(param_1 + 0x372),0);
        *(undefined4 *)(param_1 + 0x374) = uVar4;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x390);
      uVar4 = FUN_088e38d8(param_1,param_2);
      iVar5 = FUN_0887ad78(uVar9,0,uVar4,0,0,0);
      iVar6 = 3;
      do {
        if ((*(int *)(param_1 + iVar6 * 4 + 0x65c) != 0) &&
           (*(int *)(param_1 + iVar6 * 4 + 0x65c) != 0)) {
          iVar8 = param_1 + iVar6 * 4;
          FUN_0887ba5c(*(undefined4 *)(iVar8 + 0x65c));
          *(undefined4 *)(iVar8 + 0x65c) = 0;
        }
        uVar4 = FUN_0887e534(iVar5);
        iVar8 = iVar6 * 4;
        iVar6 = iVar6 + -1;
        *(undefined4 *)(param_1 + iVar8 + 0x65c) = uVar4;
      } while (-1 < iVar6);
      if ((*(int *)(param_1 + 0x658) != 0) && (*(int *)(param_1 + 0x658) != 0)) {
        FUN_0887ba5c(*(undefined4 *)(param_1 + 0x658));
        *(undefined4 *)(param_1 + 0x658) = 0;
      }
      uVar4 = FUN_0887e534(iVar5);
      *(undefined4 *)(param_1 + 0x658) = uVar4;
      if (iVar5 != 0) {
        FUN_0887ba5c(iVar5);
      }
    }
    break;
  case 0xd7:
  case 0xda:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (((iVar5 == 0) && (*(int *)(param_1 + 0x374) != 0)) &&
       ((int)*(short *)(param_1 + 0x372) == *(int *)(param_1 + 0x388))) {
      if (*(int *)(param_1 + 0x374) != 0) {
        FUN_088da060(*(undefined4 *)(param_1 + 0x374));
        *(undefined4 *)(param_1 + 0x374) = 0;
      }
      *(short *)(param_1 + 0x372) = (short)*(undefined4 *)(param_1 + 0x38c);
      uVar4 = FUN_088daa40(*(undefined4 *)(param_1 + *(short *)(param_1 + 0x370) * 4 + 0x60),
                           (int)*(short *)(param_1 + 0x372),0);
      *(undefined4 *)(param_1 + 0x374) = uVar4;
    }
    break;
  case 0xd8:
    iVar5 = FUN_088dfca4(*(undefined4 *)(param_1 + 4));
    if (iVar5 != 0) {
      return;
    }
    iVar5 = FUN_088e3970(param_1,*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8));
    if (*(int *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) != 0) {
      FUN_0887b944(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    }
    iVar6 = *(int *)(param_1 + 0x684) + 1;
    *(int *)(param_1 + 0x684) = iVar6;
    if (1 < iVar6) {
      *(undefined4 *)(param_1 + 0x684) = 0;
    }
    FUN_088da0a8(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(param_2 + 0xe),auStack_60,auStack_20);
    if ((*(int *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) != 0) &&
       (*(int *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) != 0)) {
      FUN_0887ba5c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) = 0;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x390);
    uVar4 = FUN_088e38d8(param_1,param_2);
    uVar4 = FUN_0887ad78(uVar9,0,uVar4,0,0,0);
    *(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc) = uVar4;
    FUN_0887ba04(uVar4);
    FUN_0887b828(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc),auStack_20);
    FUN_0887b778(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc),auStack_60);
    iVar6 = *(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x24) + 0xc);
    iVar5 = (int)*(short *)(*(int *)(iVar5 + 4) + 0xc);
    if (iVar5 < *(int *)(iVar6 + 0x2c)) {
      iVar5 = *(int *)(iVar6 + 0xc) + iVar5 * 0x1c;
    }
    else {
      iVar5 = 0;
    }
    FUN_0887b900(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc),
                 *(undefined4 *)(iVar5 + 8));
    iVar5 = *(int *)(param_2 + 10);
    if (iVar5 < 2) {
      if (iVar5 < 1) goto LAB_088e4c98;
      FUN_0887b970(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    }
    else if (iVar5 < 3) {
      FUN_0887b958(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    }
    else {
LAB_088e4c98:
      FUN_0887b98c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
    }
    iVar5 = *(int *)(param_2 + 0xc);
    if (iVar5 < 2) {
      if (0 < iVar5) {
        FUN_0887b9a4(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
        return;
      }
    }
    else if (iVar5 < 3) {
      FUN_0887b9e4(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
      return;
    }
    FUN_0887b9c4(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x684) * 4 + 0x5fc));
  }
  return;
}

