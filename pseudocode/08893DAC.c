/* Entry 0x08893DAC | file offset 0x00090D84 | FUN_08893dac | bytes 584 */

void FUN_08893dac(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = (int *)FUN_08899300();
  if (*piVar1 != 0) {
    iVar8 = 0;
    puVar7 = (undefined2 *)(param_1 + 0x612);
    iVar6 = param_1;
    do {
      if (-1 < *(short *)(iVar6 + 0x612)) {
        uVar2 = FUN_08899300();
        uVar2 = FUN_088985f0(uVar2,(int)*(short *)(iVar6 + 0x612));
        iVar9 = (int)(*(float *)(DAT_089d69e0 + 0x18) * 5.0);
        if ((*(char *)(iVar6 + 0x616) == '\0') && (*(char *)(iVar6 + 0x61a) < '\x01')) {
          uVar4 = (undefined2)((uint)((*(short *)(iVar6 + 0x614) + iVar9) * 0x10000) >> 0x10);
        }
        else {
          uVar4 = (undefined2)((uint)((*(short *)(iVar6 + 0x614) - iVar9) * 0x10000) >> 0x10);
        }
        *(undefined2 *)(iVar6 + 0x614) = uVar4;
        sVar5 = *(short *)(iVar6 + 0x614);
        if (*(char *)(iVar6 + 0x617) == '\0') {
          if (sVar5 < 0x32) {
            *(undefined2 *)(iVar6 + 0x614) = 0x32;
            sVar5 = *(short *)(iVar6 + 0x614);
          }
          if ((sVar5 < 100) && (*(char *)(param_1 + 0x6b3) != '\x01')) {
            uVar2 = FUN_08899300();
            iVar9 = FUN_088987e8(uVar2,(int)*(short *)(iVar6 + 0x612));
            if (iVar9 != 0) {
              iVar9 = (int)*(short *)(iVar6 + 0x614);
              goto LAB_08893f68;
            }
            *puVar7 = 0xffff;
            puVar7[1] = 0;
            *(undefined1 *)(puVar7 + 2) = 0;
            *(undefined1 *)((int)puVar7 + 5) = 0;
            *(undefined1 *)(puVar7 + 3) = 0xff;
            *(undefined1 *)(puVar7 + 4) = 0;
          }
          else {
            uVar3 = FUN_08899300();
            iVar9 = FUN_088987e8(uVar3,(int)*(short *)(iVar6 + 0x612));
            if (iVar9 != 0) {
              FUN_0886bb44(*(undefined4 *)(param_1 + 0x74),uVar2,0,1,1);
            }
            *puVar7 = 0xffff;
            puVar7[1] = 0;
            *(undefined1 *)(puVar7 + 2) = 0;
            *(undefined1 *)((int)puVar7 + 5) = 0;
            *(undefined1 *)(puVar7 + 3) = 0xff;
            *(undefined1 *)(puVar7 + 4) = 0;
          }
LAB_08893f64:
          iVar9 = (int)*(short *)(iVar6 + 0x614);
        }
        else {
          if (sVar5 < 0) {
            *(undefined2 *)(iVar6 + 0x614) = 0;
            goto LAB_08893f64;
          }
          iVar9 = (int)*(short *)(iVar6 + 0x614);
        }
LAB_08893f68:
        iVar9 = (iVar9 * 0xff) / 100;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        if (0xff < iVar9) {
          iVar9 = 0xff;
        }
        *(char *)(iVar6 + 0x618) = (char)iVar9;
        *(undefined1 *)(iVar6 + 0x616) = 0;
        *(undefined1 *)(iVar6 + 0x617) = 0;
        if ('\0' < *(char *)(iVar6 + 0x61a)) {
          *(char *)(iVar6 + 0x61a) = *(char *)(iVar6 + 0x61a) + -1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 10;
      puVar7 = puVar7 + 5;
    } while (iVar8 < 0x10);
  }
  return;
}

