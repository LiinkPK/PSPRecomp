/* Entry 0x08974370 | file offset 0x00171348 | FUN_08974370 | bytes 704 */

void FUN_08974370(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                 uint param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = FUN_089742b4(param_1,param_7);
  if (iVar1 == 0) {
    iVar2 = FUN_08973ec8(param_3);
    iVar1 = iVar2 * param_4 * param_5;
    uVar3 = FUN_08974084(param_1,(int)(iVar1 + ((uint)(iVar1 >> 3) >> 0x1d)) >> 3,param_7);
    uVar4 = FUN_089742e8(param_1,uVar3);
    uVar8 = param_4 / (0x20 / iVar2);
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = param_6 & 0xffffff | 0xb2000000;
    puVar6 = (uint *)*param_2;
    uVar7 = uVar4 & 0xffffff;
    *param_2 = (int)(puVar6 + 1);
    uVar4 = (uVar4 >> 0x18 & 0xf) << 0x10;
    *puVar6 = (param_6 >> 0x18 & 0xf) << 0x10 | 0xb3000000 | uVar8;
    puVar5 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    *puVar5 = 0xeb000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = uVar7 | 0xb4000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = uVar4 | 0xb5000000 | uVar8;
    puVar5 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    *puVar5 = 0xec000000;
    puVar6 = (uint *)*param_2;
    *param_2 = (int)(puVar6 + 1);
    *puVar6 = (param_5 + -1) * 0x400 | 0xee000000U | uVar8 - 1;
    puVar5 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    *puVar5 = 0xea000001;
    puVar5 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    *puVar5 = 0xcc000000;
  }
  else {
    uVar7 = FUN_089742e8(param_1,iVar1);
    uVar4 = (uVar7 >> 0x18 & 0xf) << 0x10;
    uVar7 = uVar7 & 0xffffff;
  }
  puVar6 = (uint *)*param_2;
  *param_2 = (int)(puVar6 + 1);
  *puVar6 = uVar7 | 0xa0000000;
  puVar6 = (uint *)*param_2;
  *param_2 = (int)(puVar6 + 1);
  *puVar6 = uVar4 | 0xa8000000 | param_4 + 0xfU & 0xfffffff0;
  puVar6 = (uint *)*param_2;
  *param_2 = (int)(puVar6 + 1);
  *puVar6 = (0x1f - LZCOUNT(param_5)) * 0x100 | 0xb8000000U | 0x1fU - LZCOUNT(param_4);
  puVar5 = (undefined4 *)*param_2;
  *param_2 = (int)(puVar5 + 1);
  *puVar5 = 0xcb000000;
  return;
}

