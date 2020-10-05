const random_images_array = [
    'jan (1).jpg', 'jan (2).jpg', 'jan (3).jpg', 'jan (4).jpg', 'jan (5).jpg', 'jan (6).jpg', 'jan (7).jpg', 'jan (8).jpg', 'jan (9).jpg',

    'jan (10).jpg', 'jan (11).jpg', 'jan (12).jpg', 'jan (13).jpg', 'jan (14).jpg', 'jan (15).jpg', 'jan (16).jpg', 'jan (17).jpg', 'jan (18).jpg', 'jan (19).jpg',

    'jan (20).jpg', 'jan (21).jpg', 'jan (22).jpg', 'jan (23).jpg', 'jan (24).jpg', 'jan (25).jpg', 'jan (26).jpg', 'jan (27).jpg', 'jan (28).jpg', 'jan (29).jpg',

    'jan (30).jpg', 'jan (31).jpg', 'jan (32).jpg', 'jan (33).jpg', 'jan (34).jpg', 'jan (35).jpg', 'jan (36).jpg', 'jan (38).jpg', 'jan (39).jpg',

    'jan (40).jpg', 'jan (41).jpg', 'jan (42).jpg', 'jan (43).jpg', 'jan (44).jpg', 'jan (45).jpg', 'jan (46).jpg', 'jan (47).jpg', 'jan (48).jpg', 'jan (49).jpg',

    'jan (50).jpg', 'jan (51).jpg', 'jan (52).jpg', 'jan (53).jpg', 'jan (54).jpg', 'jan (55).jpg', 'jan (56).jpg',

    'jan (1).jfif', 'jan (2).jfif', 'jan (3).jfif', 'jan (4).jfif', 'jan (5).jfif', 'jan (6).jfif', 'jan (7).jfif', 'jan (8).jfif', 'jan (9).jfif',

    'jan (10).jfif', 'jan (11).jfif', 'jan (12).jfif', 'jan (13).jfif',


];

function getRandomPapa(imgAr, path) {
    path = path || 'ty-janie-img/';
    const num = Math.floor(Math.random() * imgAr.length);
    const img = imgAr[num];
    const imgStr = '<img src="' + path + img + '" alt = "">';
    document.write(imgStr);
    document.close();
}