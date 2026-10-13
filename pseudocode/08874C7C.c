/* Entry 0x08874C7C | file offset 0x00071C54 | FUN_08874c7c | bytes 384 */

void FUN_08874c7c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = 0.0;
  fVar9 = 0.0;
  DAT_09b48864 = 0;
  DAT_09b48868 = 0;
  puVar5 = DAT_09b48358;
  while (puVar1 = puVar5, puVar1 != (undefined4 *)0x0) {
    puVar5 = DAT_09b48358;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)puVar1[8];
    }
    FUN_088745e8(puVar1);
    fVar6 = (float)FUN_089a4500(*puVar1);
    fVar7 = (float)FUN_089a4500(puVar1[1]);
    puVar3 = DAT_09b48358;
    if (fVar8 < fVar6) {
      DAT_09b48864 = *puVar1;
      fVar8 = fVar6;
    }
    if (fVar9 < fVar7) {
      DAT_09b48868 = puVar1[1];
      fVar9 = fVar7;
    }
    if ((*(char *)(puVar1 + 7) == '\x01') && (*(char *)((int)puVar1 + 0x1e) == '\0')) {
      if ((DAT_09b48358 != (undefined4 *)0x0) && (DAT_09b4835c != (undefined4 *)0x0)) {
        puVar4 = (undefined4 *)puVar1[8];
        if (puVar1 == DAT_09b48358) {
          puVar3 = (undefined4 *)0x0;
          DAT_09b48358 = puVar4;
        }
        else {
          puVar2 = (undefined4 *)DAT_09b48358[8];
          if ((undefined4 *)DAT_09b48358[8] == puVar1) {
            DAT_09b48358[8] = puVar4;
          }
          else {
            do {
              puVar3 = puVar2;
              puVar2 = (undefined4 *)puVar3[8];
            } while ((undefined4 *)puVar3[8] != puVar1);
            puVar3[8] = puVar4;
          }
        }
        if (puVar1 == DAT_09b4835c) {
          DAT_09b4835c = puVar3;
        }
        puVar1[8] = 0;
      }
      FUN_0887487c(puVar1);
    }
  }
  return;
}

