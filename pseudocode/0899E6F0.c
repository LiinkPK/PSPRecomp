/* Entry 0x0899E6F0 | file offset 0x0019B6C8 | FUN_0899e6f0 | bytes 528 */

void FUN_0899e6f0(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5
                 )

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  switch(param_5) {
  case 0:
    return;
  case 1:
    if (0 < param_4) {
      do {
        puVar7 = param_1;
        iVar6 = param_3;
        if (0 < param_3) {
          do {
            iVar6 = iVar6 + -1;
            *puVar7 = *param_2;
            puVar1 = param_2 + 1;
            param_2 = param_2 + 2;
            puVar7[1] = *puVar1;
            puVar7 = puVar7 + 2;
          } while (iVar6 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + (param_3 * 2 + 0xfU & 0xfffffff0);
      } while (param_4 != 0);
    }
    break;
  case 2:
    if (0 < param_4) {
      do {
        puVar7 = param_1;
        iVar6 = param_3;
        if (0 < param_3) {
          do {
            iVar6 = iVar6 + -1;
            *puVar7 = *param_2;
            puVar7[1] = param_2[1];
            uVar3 = param_2[2];
            puVar7[3] = 0xff;
            param_2 = param_2 + 3;
            puVar7[2] = uVar3;
            puVar7 = puVar7 + 4;
          } while (iVar6 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + (param_3 * 4 + 0xfU & 0xfffffff0);
      } while (param_4 != 0);
      return;
    }
    break;
  case 3:
    if (0 < param_4) {
      do {
        puVar7 = param_1;
        iVar6 = param_3;
        if (0 < param_3) {
          do {
            bVar2 = param_2[3];
            iVar6 = iVar6 + -1;
            *puVar7 = *param_2;
            puVar7[1] = param_2[1];
            uVar4 = (int)((uint)bVar2 * 0xff) >> 7;
            if (0xff < uVar4) {
              uVar4 = 0xff;
            }
            puVar7[2] = param_2[2];
            param_2 = param_2 + 4;
            puVar7[3] = (char)uVar4;
            puVar7 = puVar7 + 4;
          } while (iVar6 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + (param_3 * 4 + 0xfU & 0xfffffff0);
      } while (param_4 != 0);
      return;
    }
    break;
  case 4:
    iVar6 = (param_3 + 1) / 2;
    if (0 < param_4) {
      do {
        iVar5 = iVar6;
        puVar7 = param_1;
        if (0 < iVar6) {
          do {
            uVar3 = *param_2;
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 1;
            *puVar7 = uVar3;
            puVar7 = puVar7 + 1;
          } while (iVar5 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + (iVar6 + 0xfU & 0xfffffff0);
      } while (param_4 != 0);
      return;
    }
    break;
  case 5:
    if (0 < param_4) {
      do {
        iVar6 = param_3;
        puVar7 = param_1;
        if (0 < param_3) {
          do {
            uVar3 = *param_2;
            iVar6 = iVar6 + -1;
            param_2 = param_2 + 1;
            *puVar7 = uVar3;
            puVar7 = puVar7 + 1;
          } while (iVar6 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + (param_3 + 0xfU & 0xfffffff0);
      } while (param_4 != 0);
      return;
    }
  }
  return;
}

