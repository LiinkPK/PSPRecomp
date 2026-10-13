/* Entry 0x0893A234 | file offset 0x0013720C | FUN_0893a234 | bytes 240 */

void FUN_0893a234(int param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *param_2;
  puVar2 = param_2;
  while (uVar1 != 0) {
    if (uVar1 == 0x25) {
      if (puVar2[1] == 0) {
        puVar2 = puVar2 + 1;
      }
      else {
        puVar2 = puVar2 + 1;
        uVar1 = *puVar2;
        while ((uVar1 < 0x41 && (puVar2[1] != 0))) {
          puVar2 = puVar2 + 1;
          uVar1 = *puVar2;
        }
        switch(uVar1) {
        case 0x45:
        case 0x47:
        case 0x4c:
        case 0x65:
        case 0x66:
        case 0x67:
          FUN_0893a590(*(undefined4 *)(param_1 + 0x54),param_1,param_2,param_3);
          return;
        case 0x46:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
          puVar2 = puVar2 + 1;
          break;
        default:
          puVar2 = puVar2 + 1;
        }
      }
    }
    else {
      puVar2 = puVar2 + 1;
    }
    uVar1 = *puVar2;
  }
  FUN_0893bbc4(*(undefined4 *)(param_1 + 0x54),param_1,param_2,param_3);
  return;
}

