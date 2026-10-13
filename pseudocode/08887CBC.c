/* Entry 0x08887CBC | file offset 0x00084C94 | FUN_08887cbc | bytes 956 */

void FUN_08887cbc(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  undefined4 local_280 [2];
  undefined4 uStack_278;
  int local_5c;
  uint local_58;
  char *local_54;
  uint local_50;
  char *local_4c;
  undefined2 *local_48;
  int local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  uint local_38;
  
  pcVar3 = DAT_089d8508;
  local_50 = param_5 & 0xff;
  param_4 = param_4 & 0xff;
  *(undefined2 *)(param_2 + 0x28) = 0;
  psVar8 = &DAT_09afe030;
  iVar15 = 0;
  if (0 < DAT_09afe058) {
    local_48 = &DAT_09afe030;
    local_4c = pcVar3;
    local_40 = &DAT_09afb8a0;
    pcVar14 = pcVar3 + 0x27e0;
    local_54 = pcVar3 + 0x2a04;
    uVar16 = (uint)((param_4 ^ 1) != 0);
    local_58 = (uint)((param_4 ^ 1) == 0);
    local_5c = param_3 + 8;
    local_3c = &DAT_09afc900;
    local_44 = param_3;
    do {
      pcVar12 = pcVar3 + 0x29d8;
      pcVar4 = (char *)FUN_08887bac(pcVar12,pcVar12 + *(short *)(pcVar3 + 0x2a00) * 2,psVar8);
      uVar13 = 0;
      if (pcVar4 == pcVar12 + *(short *)(pcVar3 + 0x2a00) * 2) {
        sVar2 = *psVar8;
        if ((uint)(int)sVar2 < 9) {
          switch(sVar2) {
          default:
            uVar13 = param_4;
            break;
          case 1:
            if ((param_4 == 1) && ((int)psVar8[1] <= *(int *)(local_5c + 0xb0))) {
              uVar13 = 1;
            }
            break;
          case 2:
            if (((param_4 == 1) && (*(int *)(*(int *)(local_44 + 4) + 0x18) == 0)) &&
               (*(int *)(*(int *)(local_44 + 4) + 0x7c) == 0)) {
              uVar13 = 1;
            }
            break;
          case 3:
            if ((((param_4 == 1) && (iVar5 = *(int *)(local_44 + 4), *(int *)(iVar5 + 0x18) == 0))
                && (*(int *)(iVar5 + 0xc) == 0)) &&
               ((*(int *)(iVar5 + 0x7c) == 0 && (*(int *)(iVar5 + 0x70) == 0)))) {
              uVar13 = 1;
            }
            break;
          case 5:
          case 8:
            if (*local_4c == '\x01') {
              iVar5 = FUN_0891bdfc(local_4c,uVar16);
              if (iVar5 == 0) {
                cVar1 = local_54[uVar16 * 0xd + 1];
                iVar9 = 0x44;
                uVar11 = *(undefined4 *)pcVar14;
                iVar5 = 0;
                pcVar4 = pcVar14;
                puVar10 = local_280;
                do {
                  uVar6 = *(undefined4 *)(pcVar4 + 4);
                  *puVar10 = uVar11;
                  puVar10[1] = uVar6;
                  pcVar4 = pcVar14 + iVar5 + 8;
                  iVar9 = iVar9 + -1;
                  uVar11 = *(undefined4 *)pcVar4;
                  puVar10 = (undefined4 *)((int)&uStack_278 + iVar5);
                  iVar5 = iVar5 + 8;
                } while (iVar9 != 0);
                *puVar10 = uVar11;
                iVar5 = cVar1 * 0x14 + uVar16 * 0x68;
                if (local_50 == 0) {
                  *(char *)((int)&uStack_278 + iVar5 + 2) =
                       *(char *)((int)&uStack_278 + iVar5 + 2) + '\x01';
                }
                iVar5 = FUN_0891a44c(local_280);
                uVar13 = (uint)(iVar5 == 0);
              }
            }
            else {
              uVar13 = sVar2 * 4 >> 2 == 8 & local_58;
            }
            break;
          case 6:
            if ((param_4 == 1) && (uVar13 = 1, *(char *)(DAT_089d6a00 + 0x18) == '\x01')) {
              uVar13 = (uint)(*(int *)(DAT_089d6a00 + 4) == 2);
            }
            break;
          case 7:
            if (param_4 == 1) {
              local_38 = uVar16;
              iVar5 = FUN_088cbad0(local_3c);
              iVar9 = FUN_088cbad0(local_40);
              uVar16 = local_38;
              if ((int)psVar8[1] <= iVar5 - iVar9) {
                uVar13 = 1;
              }
            }
          }
        }
        if (uVar13 == 1) {
          sVar2 = *(short *)(param_2 + 0x28);
          if (9 < sVar2) {
            return;
          }
          psVar7 = (short *)(param_2 + sVar2 * 2);
          *psVar7 = *psVar8;
          psVar7[10] = psVar8[1];
          *(short *)(param_2 + 0x28) = sVar2 + 1;
        }
        sVar2 = local_48[0x14];
      }
      else {
        sVar2 = local_48[0x14];
      }
      iVar15 = iVar15 + 1;
      psVar8 = psVar8 + 2;
    } while (iVar15 < sVar2);
  }
  return;
}

